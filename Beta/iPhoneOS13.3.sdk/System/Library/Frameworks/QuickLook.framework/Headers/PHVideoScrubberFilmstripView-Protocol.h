/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/Swift-Protocol.h>

@class AVAsset, AVVideoComposition, UIImage;

@protocol PHVideoScrubberFilmstripView <Swift>

@property (copy, nonatomic) AVAsset *asset;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGRect visibleRect;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

@end
