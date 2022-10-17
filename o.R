#team of 12 players as a matrix of dimension 4x3 in row major form
M=matrix(c('171','169','175','168','179','181','169','177','178','180','169','174'), nrow=4, ncol=3, byrow=TRUE)
print(M)

#Access the height at row 3 and column 2
M[3,2]

#Display all the heights in row 2
R<-M[2, ]
print(R)

#Display all the heights in column 3
C<-M[ ,3]
print(C)

#Extract the heights in all rows but only in column 1 and 3
print(M[,c(1,3)])

#find the transpose of the matrix
t <- t(M)
print(t)

#Four more players got added to the team. Update the matrix to reflect the heights of the players.
newmatrix <- rbind(t, c(183,174,177,168))
print(newmatrix)


