/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSNumber;

@protocol MTLTexture;

@interface _Background : _Geometry

{
    NSNumber *_numbers;
    NSNumber *_glow;
    id <MTLTexture> _numbersTex;
    id <MTLTexture> _glowTex;
}

@property (retain, nonatomic) NSNumber *numbers;
@property (retain, nonatomic) NSNumber *glow;
@property (retain, nonatomic) id <MTLTexture> numbersTex;
@property (retain, nonatomic) id <MTLTexture> glowTex;

@end
