/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VideosExtrasBorderedImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomingImageTransitionContext : NSObject

{
    _Bool _interactive;
    VideosExtrasBorderedImageView *_zoomingImageView;
    unsigned long long _itemIndex;
    unsigned long long _appearState;
}

@property (retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic) unsigned long long appearState;
@property (nonatomic, getter=isInteractive) _Bool interactive;

- (id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(_Bool)arg4;

@end
