/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXForYouSuggestionsAssetsDataSource, PXSuggestionsDataSource, PXSuggestionsDataSourceManager;

@protocol PXDisplaySuggestion;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <Swift>

{
    id <PXDisplaySuggestion> _displayOriginalSuggestion;
    PXSuggestionsDataSourceManager *_suggestionsDataSourceManager;
    PXSuggestionsDataSource *_suggestionsDataSource;
}

@property (nonatomic, readonly) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (retain, nonatomic) PXSuggestionsDataSource *suggestionsDataSource;
@property (retain, nonatomic) id <PXDisplaySuggestion> displayOriginalSuggestion;
@property (nonatomic, readonly) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (id)initWithSuggestionsDataSourceManager:(id)arg1;

@end
