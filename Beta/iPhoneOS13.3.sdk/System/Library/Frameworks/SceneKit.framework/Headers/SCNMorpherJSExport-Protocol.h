/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, NSString, SCNMorpher;

@protocol SCNMorpherJSExport <Swift>

@property (copy, nonatomic) NSArray *targets;
@property (nonatomic) long long calculationMode;
@property (retain, nonatomic) NSArray *weights;
@property _Bool unifiesNormals;
@property (retain, nonatomic) NSArray *channelTargetCounts;
@property (retain, nonatomic) NSArray *channelTargetWeights;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) SCNMorpher *presentationMorpher;

+ (unsigned short)morpher;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setWeight:forTargetAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)weightForTargetAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)weightAtTargetIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setWeight:atTargetIndex: /* Error: Ran out of types for this method. */;

@end
