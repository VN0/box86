#ifdef GO

GOW(iFpV, iFpp_t, p(0), (void*)stack(4))
GOW(iF1pV, iFipp_t, 1, p(0), (void*)stack(4))
GOW(iFopV, iFppp_t, (void*)stdout, p(0), (void*)stack(4))
GOW(iFvopV, iFppp_t, (void*)stdout, p(4), (void*)stack(8))
GO01(i,v)
GO01(i,i)
GO01(i,p)
GO01(i,u)
GO02(i,E,p)
GO02(i,i,i)
GO02(i,i,p)
GO02(i,p,i)
GO02(i,p,p)
GO02(i,p,u)
GO02(i,u,i)
GO02(i,u,p)
GO02(i,u,u)
GO03(i,i,p,p)
GO03(i,p,i,i)
GO03(i,p,i,p)
GO03(i,p,p,i)
GO03(i,p,p,u)
GO03(i,p,p,p)
GO03(i,E,p,p)
GO04(i,u,i,p,p)
GO04(i,i,W,i,i)
GO04(i,i,p,i,i)
GO04(i,p,i,p,p)
GO04(i,p,p,p,i)
GO04(i,p,u,u,p)
GO05(i,E,p,i,p,p)
GO05(i,E,p,p,p,p)
GO05(i,i,p,i,i,i)
GO05(i,p,p,p,i,i)
GO05(i,p,p,p,p,p)
GO06(i,p,i,u,u,u,u)
GO06(i,p,p,u,i,i,u)
GO07(i,p,p,i,i,u,u,i)
GO08(i,E,p,i,p,p,p,p,p)
GO09(i,p,p,i,u,i,i,p,p,u)
GO10(i,p,p,p,p,i,i,i,i,u,u)
GO12(i,p,p,p,i,i,i,p,p,p,p,p,p)

#else
#error Meh
#endif
