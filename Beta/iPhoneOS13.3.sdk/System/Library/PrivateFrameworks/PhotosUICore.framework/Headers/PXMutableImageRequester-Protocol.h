/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXDisplayAsset, PXUIImageProvider;

@protocol PXMutableImageRequester <Swift>

@property (retain, nonatomic) id <PXUIImageProvider> mediaProvider;
@property (retain, nonatomic) id <PXDisplayAsset> asset;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize maximumRequestSize;
@property (nonatomic) struct CGRect desiredContentsRect;
@property (nonatomic) struct CGSize viewportSize;

- (unsigned short)handlePreloadedImage: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePreloadedImageRequester: /* Error: Ran out of types for this method. */;

@end
