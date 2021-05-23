/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMapTable, NSString, PXAssetReference, PXAssetsDataSourceManager, PXSuggestionsDataSource, PXSuggestionsDataSourceManager;

@interface PXForYouSuggestionsGadgetProvider : PXGadgetProvider <Swift>

{
    _Bool _hasGeneratedGadgets;
    NSMapTable *_keyAssetFetchesBySuggestion;
    PXSuggestionsDataSourceManager *_dataSourceManager;
    NSString *_localizedTitle;
    NSArray *_oneUpAssets;
    PXAssetReference *_oneUpInitialAssetReference;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXSuggestionsDataSource *_dataSource;
}

@property (retain, nonatomic) NSArray *oneUpAssets;
@property (retain, nonatomic) PXAssetReference *oneUpInitialAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic, readonly) PXSuggestionsDataSource *dataSource;
@property (nonatomic, readonly) PXSuggestionsDataSourceManager *dataSourceManager;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)presentOneUpForSuggestion:(id)arg1;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)arg1;
- (id)_gadgetForAssetReference:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1 localizedTitle:(id)arg2;
- (void)configureGadget:(id)arg1;
- (id)keyAssetForSuggestion:(id)arg1;

@end
