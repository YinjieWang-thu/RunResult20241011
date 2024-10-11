void runjobs_3()
{
	TChain *chain = new TChain("mkcands/X_data","");
	TString inputFile;
	chain->Add("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/ntuple/ntuple_data_2016_mine/Run2016C/Charmonium/crab_jpsix3872_data_2016C_UL_skimple/220928_003306/0001/*.root");
	myntuple a(chain);
	a.Loop("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/Data/Data1/__220928_003306.root");
        //Delete all things to save memory
	a.~myntuple();
	delete chain;
}
