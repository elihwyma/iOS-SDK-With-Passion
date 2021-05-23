/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <SpriteKit/SKShader.h>

@class SKUniform, UIColor;

@interface NTKTickShader : SKShader

{
    SKUniform *_filterUniform;
    SKUniform *_backgroundColorUniform;
    double _tickWidth;
    double _filterWidth;
    UIColor *_backgroundColor;
}

@property (nonatomic, readonly) double tickWidth;
@property (nonatomic, readonly) double filterWidth;
@property (retain, nonatomic) UIColor *backgroundColor;

+ (id)shaderWithTickWidth:(float)arg1 filterWidth:(float)arg2;

- (id)init;
- (id)initWithTickWidth:(float)arg1 filterWidth:(float)arg2;

@end
