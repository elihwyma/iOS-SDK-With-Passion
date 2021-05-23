/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUTimeTransformTrim : NUGeometryTransform

{
    CDStruct_1b6d18a9 _beginTime;
}

@property (readonly) CDStruct_1b6d18a9 beginTime;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)inverseTransform;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithTrimBeginTime:(CDStruct_1b6d18a9)arg1;

@end
