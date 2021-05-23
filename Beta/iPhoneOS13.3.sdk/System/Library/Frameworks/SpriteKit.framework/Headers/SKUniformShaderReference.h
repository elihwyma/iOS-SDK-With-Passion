/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class SKShader;

__attribute__((visibility("hidden")))
@interface SKUniformShaderReference : NSObject

{
    SKShader *_targetShader;
}

@property (weak, nonatomic) SKShader *targetShader;

@end
