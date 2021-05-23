/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@interface SKGlobalSharedContextRegistry : NSObject

+ (id)globalGLSharedContext;
+ (void)setGlobalGLSharedContext:(id)arg1;
+ (id)globalMetalDevice;
+ (void)setGlobalMetalDevice:(id)arg1;
+ (void)setPrefersOpenGL:(_Bool)arg1;
+ (_Bool)getPrefersOpenGL;

@end
