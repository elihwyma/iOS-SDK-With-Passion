/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationAnimator : NSObject

{
    double _duration;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _startMediaTime;
    CDUnknownBlockType _advanceBlock;
    CADisplayLink *_displayLink;
}

@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) double startMediaTime;
@property (copy, nonatomic) CDUnknownBlockType advanceBlock;
@property (weak, nonatomic) CADisplayLink *displayLink;

- (id)init;
- (void)stopAnimation;
- (void)_advanceFromDisplayLink:(id)arg1;
- (id)initWithDuration:(double)arg1 advanceBlock:(CDUnknownBlockType)arg2;

@end
