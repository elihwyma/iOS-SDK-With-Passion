/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMSuggestionsDataSourceManager, PXMessagesCMMSuggestionsGadgetProvider, PXNoContentGadget;

@interface PXMessagesCMMSuggestionsCollectionGadgetProvider : PXGadgetProvider <Swift>

{
    PXMessagesCMMSuggestionsGadgetProvider *_suggestionsGadgetProvider;
    PXNoContentGadget *_noContentGadget;
    _Bool _isShowingEmpty;
    _Bool _hasGeneratedGadgets;
    double _contentHeightAdjustment;
}

@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (nonatomic) double contentHeightAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)_updateGadgets;
- (id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2;

@end
