/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMPosterBannerView, PXCMMViewModel, PXMomentShareStatusPresentation, UIView;

@protocol PXAssetImportStatusManager, PXCMMBannerTileControllerDelegate;

@interface PXCMMBannerTileController : NSObject <Swift>

{
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    id <PXAssetImportStatusManager> _importStatusManager;
    NSArray *_localizedNames;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXCMMBannerTileControllerDelegate> _delegate;
    PXCMMPosterBannerView *_bannerView;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
}

@property (retain, nonatomic) PXCMMPosterBannerView *bannerView;
@property (retain, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (weak, nonatomic) id <PXCMMBannerTileControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (id)new;

- (id)init;
- (void)prepareForReuse;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateBannerActionButton;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5;
- (void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (void)_updateCounts;
- (void)_configureBannerViewActionButtonWithTitle:(id)arg1;
- (void)_updateContainsUnverifierPersons;
- (void)_updatePeopleSuggestionNames;
- (void)_updateLocalizedNamesByViewModel;

@end
