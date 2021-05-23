/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNMaterialPropertyJSExport <Swift>

@property (retain, nonatomic) id contents;
@property (nonatomic) double intensity;
@property (nonatomic) long long minificationFilter;
@property (nonatomic) long long magnificationFilter;
@property (nonatomic) long long mipFilter;
@property (nonatomic) struct SCNMatrix4 contentsTransform;
@property (nonatomic) long long wrapS;
@property (nonatomic) long long wrapT;
@property (retain, nonatomic) id borderColor;
@property (nonatomic) long long mappingChannel;
@property (nonatomic) long long textureComponents;
@property (nonatomic) double maxAnisotropy;

+ (unsigned short)materialPropertyWithContents: /* Error: Ran out of types for this method. */;

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

@end
