/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGPPTViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMapTable, NSObject, NSString, PXAssetsDataSource, UIColor;

@protocol OS_dispatch_queue;

@interface PXGPPTVideoPlaybackViewController : PXGPPTViewController <Swift>

{
    UIColor *_spriteColor;
    long long _numberOfColumns;
    PXAssetsDataSource *_dataSource;
    NSObject<OS_dispatch_queue> *_pixelBufferSources_queue;
    NSMapTable *_pixelBufferSourcesByDisplayAsset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithLayout:(id)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (id)initWithAssetsDataSource:(id)arg1;

@end
