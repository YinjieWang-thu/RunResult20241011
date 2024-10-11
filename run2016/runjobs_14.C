void runjobs_14()
{
	TChain *chain = new TChain("mkcands/X_data","");
	TString inputFile;
	chain->Add("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/ntuple/ntuple_data_2016_mine/Run2016F_HIPM/Charmonium/crab_jpsix3872_data_2016F_HIPM_UL_skimple/221001_011631/0000/*.root");
	myntuple a(chain);
	a.Loop("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/Data/Data1/__221001_011631.root");
        //Delete all things to save memory
	a.~myntuple();
	delete chain;
}
