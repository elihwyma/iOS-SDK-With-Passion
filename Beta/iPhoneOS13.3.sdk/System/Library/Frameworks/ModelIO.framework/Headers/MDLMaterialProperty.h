/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLMaterialPropertyNode, MDLTextureSampler, MISSING_TYPE, NSString, NSURL;

@interface MDLMaterialProperty : NSObject <Swift>

{
    NSString *_string;
    NSString *_name;
    NSURL *_url;
    MDLTextureSampler *_textureSampler;
    MISSING_TYPE *_float;
    CDStruct_14d5dc5e _matrix;
    struct CGColor *_color;
    unsigned long long _semantic;
    MDLMaterialPropertyNode *_node;
    MDLMaterialProperty *_overrider;
    MDLMaterialProperty *_overridee;
    _Bool _isDefaultValue;
    unsigned long long _type;
    CDStruct_14d5dc5e _matrix4x4;
}

@property (nonatomic) _Bool isDefaultValue;
@property (nonatomic) unsigned long long semantic;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSURL *URLValue;
@property (retain, nonatomic) MDLTextureSampler *textureSamplerValue;
@property (nonatomic) struct CGColor *color;
@property (nonatomic) float floatValue;
@property (nonatomic) MISSING_TYPE *float2Value;
@property (nonatomic) MISSING_TYPE *float3Value;
@property (nonatomic) MISSING_TYPE *float4Value;
@property (nonatomic) CDStruct_14d5dc5e matrix4x4;
@property (nonatomic) float luminance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (void)setProperties:(id)arg1;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 textureSampler:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 string:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float:(float)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float2: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float3: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 matrix4x4:(CDStruct_14d5dc5e)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 color:(struct CGColor *)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 URL:(id)arg3;
- (id)initWithName:(id)arg1 semantic:(unsigned long long)arg2 float4WithSRGBA: /* Error: Ran out of types for this method. */;
- (void)setMatrix4x4Value:(CDStruct_14d5dc5e)arg1;

@end
