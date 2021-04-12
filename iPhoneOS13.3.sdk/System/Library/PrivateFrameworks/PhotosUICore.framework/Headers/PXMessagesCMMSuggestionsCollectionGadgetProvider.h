//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class PXCMMSuggestionsDataSourceManager, PXMessagesCMMSuggestionsGadgetProvider, PXNoContentGadget;

@interface PXMessagesCMMSuggestionsCollectionGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver>
{
    PXMessagesCMMSuggestionsGadgetProvider *_suggestionsGadgetProvider;
    PXNoContentGadget *_noContentGadget;
    BOOL _isShowingEmpty;
    BOOL _hasGeneratedGadgets;
    double _contentHeightAdjustment;
}

@property(nonatomic) double contentHeightAdjustment; // @synthesize contentHeightAdjustment=_contentHeightAdjustment;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateGadgets;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
@property(retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
- (id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2;
- (id)init;

@end

