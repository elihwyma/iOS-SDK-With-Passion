/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@interface PLImageGeometry : NSObject <Swift>

{
    long long _inputOrientation;
    long long _userOrientation;
    struct CGRect _inputRect;
}

@property (nonatomic, readonly) struct CGRect inputRect;
@property (nonatomic, readonly) struct CGRect outputRect;
@property (nonatomic, readonly) long long inputOrientation;
@property (nonatomic) long long userOrientation;
@property (nonatomic) long long appliedOrientation;
@property (nonatomic, readonly) struct CGAffineTransform appliedTransform;
@property (nonatomic, readonly, getter=isSizeInverted) _Bool sizeInverted;
@property (nonatomic, readonly, getter=isMirrored) _Bool mirrored;

+ (id)geometryWithInputSize:(struct CGSize)arg1 initialOrientation:(long long)arg2;
+ (id)geometryWithOutputSize:(struct CGSize)arg1 appliedOrientation:(long long)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputSize:(struct CGSize)arg1 inputOrientation:(long long)arg2;
- (void)flipVertically;
- (void)flipHorizontally;
- (void)rotateClockwise;
- (void)rotateCounterClockwise;
- (void)applyOrientation:(long long)arg1;
- (struct CGRect)inputRectForOutputRect:(struct CGRect)arg1;
- (struct CGRect)outputRectForInputRect:(struct CGRect)arg1;
- (struct CGRect)denormalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)_basisRect:(long long)arg1;
- (struct CGAffineTransform)transformToOrientation:(long long)arg1;
- (struct CGAffineTransform)transformFromOrientation:(long long)arg1;
- (struct CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2;

@end
