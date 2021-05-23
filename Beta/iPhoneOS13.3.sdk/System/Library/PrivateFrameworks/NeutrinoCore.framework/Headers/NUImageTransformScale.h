/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageTransformAffine.h>

@interface NUImageTransformScale : NUImageTransformAffine

{
    CDStruct_1e2b2e48 _scale;
}

@property (readonly) CDStruct_912cb5d2 scale;

- (id)initWithScale:(CDStruct_912cb5d2)arg1;
- (id)inverseTransform;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end
