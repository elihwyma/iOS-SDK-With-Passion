/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class AVAsset, AVVideoComposition;

@protocol PXLivePhotoTrimScrubberFilmStripView <Swift>

@property (nonatomic) struct CGRect visibleRect;
@property (copy, nonatomic) AVAsset *asset;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) _Bool useContentAspectRatio;

- (unsigned short)setLivePhotoTrimScrubberThumbnail: /* Error: Ran out of types for this method. */;

@end
