/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry

{
    unsigned int _isPresentationInstance:1;
    unsigned int _usesCustomScaleFactor:1;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    unsigned long long _reflectionCategoryBitMask;
    double _width;
    double _length;
    float _reflectionResolutionScaleFactor;
    unsigned long long _reflectionSampleCount;
}

@property (nonatomic) double reflectivity;
@property (nonatomic) double reflectionFalloffStart;
@property (nonatomic) double reflectionFalloffEnd;
@property (nonatomic) unsigned long long reflectionCategoryBitMask;
@property (nonatomic) double width;
@property (nonatomic) double length;
@property (nonatomic) double reflectionResolutionScaleFactor;

+ (_Bool)supportsSecureCoding;
+ (id)floor;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)_syncObjCModel;
- (unsigned long long)reflectionSampleCount;
- (void)setReflectionSampleCount:(unsigned long long)arg1;
- (void)_customDecodingOfSCNFloor:(id)arg1;
- (id)initWithFloorGeometryRef:(struct __C3DFloor *)arg1;
- (struct __C3DFloor *)floorRef;
- (double)reflectionFallOffStart;
- (double)reflectionFallOffEnd;
- (void)setReflectionFallOffStart:(double)arg1;
- (void)setReflectionFallOffEnd:(double)arg1;
- (struct __C3DGeometry *)__createCFObject;

@end
