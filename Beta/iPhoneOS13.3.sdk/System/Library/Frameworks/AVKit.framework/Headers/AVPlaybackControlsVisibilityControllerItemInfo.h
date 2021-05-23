/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsVisibilityControllerItemInfo : NSObject

{
    _Bool _initiallyHidden;
    NSArray *_controls;
    long long _visibilityBehaviorOptions;
}

@property (retain, nonatomic) NSArray *controls;
@property (nonatomic) long long visibilityBehaviorOptions;
@property (nonatomic, getter=isInitiallyHidden) _Bool initiallyHidden;

@end
