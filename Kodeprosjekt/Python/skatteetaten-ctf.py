import pandas

df = pandas.read_csv("datagrunnlag.csv")
print(df.columns.to_list())

print(df[
    #Personnummer oddetall menn, partal kvinner
    (df["Tidligere dømt"] == "Nei") &
    (df["Tidligere etterforsket"] == "Ja") &
    (df["Selvstendig næringsdrivende"] == "Ja") &
    (df["Gjeld"] > 2000000) &
    (df["Personnummer"].astype(str).str[8].astype(int) % 2 == 1 ) &
    (df["Grunn til mistanke"] == "Tips") &
    (df["Inntekt"].between(900000, 1300000))
])

