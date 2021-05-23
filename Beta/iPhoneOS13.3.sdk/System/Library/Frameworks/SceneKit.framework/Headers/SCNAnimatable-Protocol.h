/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray;

@protocol SCNAnimatable <Swift>

@property (readonly) NSArray *animationKeys;

- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)addAnimationPlayer:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)animationPlayerForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey:blendOutDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey:fadeOutDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setSpeed:forAnimationKey: /* Error: Ran out of types for this method. */;
- (unsigned short)isAnimationForKeyPaused: /* Error: Ran out of types for this method. */;

@end
