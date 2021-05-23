/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPVideoViewConfiguration : NSObject

{
    _Bool _disablePlayback;
    _Bool _disablePlaybackControls;
    _Bool _disableAutoPlay;
    double _fullScreenTransitionCornerRadius;
}

@property (nonatomic) _Bool disablePlayback;
@property (nonatomic) _Bool disablePlaybackControls;
@property (nonatomic) _Bool disableAutoPlay;
@property (nonatomic) double fullScreenTransitionCornerRadius;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
