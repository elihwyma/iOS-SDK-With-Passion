/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CLKUIQuadView;

@interface CLKUIQuadViewDisplayLink : NSObject

{
    CLKUIQuadView *_quadView;
    CADisplayLink *_displayLink;
}

- (void)invalidate;
- (id)initWithTarget:(id)arg1;
- (_Bool)isPaused;
- (void)setPaused:(_Bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)_displayLinkFired:(id)arg1;
- (unsigned long long)preferredFramesPerSecond;

@end
