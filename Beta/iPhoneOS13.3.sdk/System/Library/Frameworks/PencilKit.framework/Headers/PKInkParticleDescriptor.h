/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PKInkParticleDescriptor : NSObject

{
    _Bool _adjustEndCapParticleAlpha;
    double _dynamicStep;
    unique_ptr_94812230 _particleSpacingFunction;
    NSString *_textureName;
    struct CGImage *_textureImage;
    double _particleSpacing;
    long long _particleCount;
    unsigned long long _particleRotation;
    struct CGSize _particleSize;
}

@property (copy, nonatomic) NSString *textureName;
@property (retain, nonatomic) struct CGImage *textureImage;
@property (nonatomic) double particleSpacing;
@property (nonatomic) long long particleCount;
@property (nonatomic) struct CGSize particleSize;
@property (nonatomic) unsigned long long particleRotation;

+ (id)arrayFromVector:(vector_b67dfe3a)arg1;
+ (id)particleDescriptorWithName:(id)arg1 particleSpacing:(double)arg2 particleCount:(long long)arg3 particleSize:(struct CGSize)arg4 particleRotation:(unsigned long long)arg5;
+ (id)particleDescriptorWithName:(id)arg1 texture:(struct CGImage *)arg2 particleSpacing:(double)arg3 particleCount:(long long)arg4 particleSize:(struct CGSize)arg5 particleRotation:(unsigned long long)arg6;

- (id).cxx_construct;
- (void)setParticleSpacingFunction:(unique_ptr_94812230)arg1;
- (unique_ptr_94812230 *)particleSpacingFunction;
- (id)particleSpacingInkFunction;
- (void)setParticleSpacingInkFunction:(id)arg1;
- (_Bool)adjustEndCapParticleAlpha;
- (void)setAdjustEndCapParticleAlpha:(_Bool)arg1;
- (void)setDynamicStep:(double)arg1;
- (double)dynamicStep;

@end
