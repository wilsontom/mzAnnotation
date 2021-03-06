% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/descriptors.R
\name{descriptors}
\alias{descriptors}
\title{convert SMILES to a series of molecular descriptors}
\usage{
descriptors(accessions)
}
\arguments{
\item{accessions}{tibble containing accession information and valid SMILEs}
}
\description{
convert SMILES to a series of molecular descriptors
}
\examples{
data(aminoAcids)
descriptors(aminoAcids)
}
