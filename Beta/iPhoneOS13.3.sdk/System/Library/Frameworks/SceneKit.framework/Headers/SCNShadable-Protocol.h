/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSDictionary, SCNProgram;

@protocol SCNShadable <Swift>

@property (retain, nonatomic) SCNProgram *program;
@property (copy, nonatomic) NSDictionary *shaderModifiers;

@end
