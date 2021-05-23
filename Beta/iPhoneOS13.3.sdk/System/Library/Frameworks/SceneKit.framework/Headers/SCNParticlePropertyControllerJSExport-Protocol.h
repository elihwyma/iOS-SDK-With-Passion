/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class CAAnimation, NSString, SCNNode;

@protocol SCNParticlePropertyControllerJSExport <Swift>

@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) long long inputMode;
@property (nonatomic) double inputScale;
@property (nonatomic) double inputBias;
@property (nonatomic) SCNNode *inputOrigin;
@property (copy, nonatomic) NSString *inputProperty;

+ (unsigned short)controllerWithAnimation: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;

@end
