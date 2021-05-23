/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSDictionary;

@protocol SCNTechniqueJSExport <Swift>

@property (readonly) NSDictionary *dictionaryRepresentation;

+ (unsigned short)techniqueWithDictionary: /* Error: Ran out of types for this method. */;
+ (unsigned short)techniqueBySequencingTechniques: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)objectForKeyedSubscript: /* Error: Ran out of types for this method. */;
- (unsigned short)setObject:forKeyedSubscript: /* Error: Ran out of types for this method. */;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBindingOfSymbol:usingBlock: /* Error: Ran out of types for this method. */;

@end
