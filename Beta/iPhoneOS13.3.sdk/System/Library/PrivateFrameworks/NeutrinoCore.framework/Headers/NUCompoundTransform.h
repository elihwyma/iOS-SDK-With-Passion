/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGeometryTransform.h>

@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform

{
    NSArray *_transforms;
}

- (id)description;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithTransforms:(id)arg1;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;

@end
