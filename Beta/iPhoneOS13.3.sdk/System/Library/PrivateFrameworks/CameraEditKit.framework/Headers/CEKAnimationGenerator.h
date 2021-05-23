/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface CEKAnimationGenerator : NSObject

{
    NSMutableDictionary *__animations;
    CADisplayLink *__displayLink;
}

@property (retain, nonatomic) NSMutableDictionary *_animations;
@property (retain, nonatomic) CADisplayLink *_displayLink;

- (id)init;
- (void)dealloc;
- (_Bool)isAnimatingForIdentifier:(id)arg1;
- (void)startAnimationForIdentifier:(id)arg1 duration:(double)arg2 updateHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopAnimationForIdentifier:(id)arg1;
- (void)stopAllAnimations;
- (void)_handleDisplayLinkFired:(id)arg1;
- (void)_stopAnimationForIdentifier:(id)arg1 didComplete:(_Bool)arg2;
- (void)_updateAnimationForIdentifer:(id)arg1 timestamp:(double)arg2;

@end
