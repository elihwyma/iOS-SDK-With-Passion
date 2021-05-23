/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSSet, NSString, PXAssetCollageView, PXAssetReference, PXFeedAssetsSectionInfo, PXGadgetSpec, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXSharedAlbumHeaderView, UILabel, _PXSharedAlbumActivityGadgetContentView;

@protocol PXGadgetDelegate;

@interface PXSharedAlbumActivityGadget : NSObject

{
    _Bool _wasAskedToLoadContentData;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXFeedAssetsSectionInfo *_assetsSectionInfo;
    _PXSharedAlbumActivityGadgetContentView *_contentView;
    PXSharedAlbumHeaderView *_headerView;
    PXAssetCollageView *_collageView;
    UILabel *_captionLabel;
    PXPhotoKitAssetsDataSourceManager *_assetsDataSourceManager;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXAssetReference *_currentAssetReference;
    NSArray *_assets;
    NSAttributedString *_caption;
    NSSet *_oneUpHiddenAssetReferences;
    struct CGRect _visibleContentRect;
}

@property (nonatomic, readonly) _Bool isContentViewLoaded;
@property (retain, nonatomic) _PXSharedAlbumActivityGadgetContentView *contentView;
@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (retain, nonatomic) PXAssetCollageView *collageView;
@property (retain, nonatomic) UILabel *captionLabel;
@property (nonatomic) _Bool wasAskedToLoadContentData;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetReference *currentAssetReference;
@property (retain, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSAttributedString *caption;
@property (copy, nonatomic) NSSet *oneUpHiddenAssetReferences;
@property (retain, nonatomic) PXFeedAssetsSectionInfo *assetsSectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

+ (void)preloadResources;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)contentViewWillAppear;
- (void)contentViewDidDisappear;
- (id)uniqueGadgetIdentifier;
- (void)_updateCollageViewVideoEnabled;
- (void)_updateCollageViewHiddenAssets;
- (void)_loadContentFromSectionInfo;
- (void)_layoutContentView;
- (void)_updateCollageView;
- (unsigned long long)_numberOfLinesForCaption;
- (_Bool)_isAccessibilityContentSize;
- (void)_loadAssets;
- (void)_loadCaption;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_handleActionTap:(id)arg1;
- (void)_handleCollageViewTap:(id)arg1;

@end
