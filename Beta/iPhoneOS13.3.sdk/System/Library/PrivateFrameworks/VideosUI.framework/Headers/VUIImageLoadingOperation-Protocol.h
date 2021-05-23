/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class NSError, TVImage;

@protocol VUIImageLoadingOperation <Swift>

@property (nonatomic, readonly) struct CGSize scaleToSize;
@property (nonatomic, readonly) _Bool cropToFit;
@property (nonatomic, readonly) TVImage *image;
@property (nonatomic, readonly) unsigned long long scalingResult;
@property (copy, nonatomic, readonly) NSError *error;

@end
