/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@protocol UICoordinateSpace;

@interface PXNonuniformTransform : NSObject <Swift>

{
    struct CGRect _sourceRect;
    struct CGRect _targetRect;
    NSObject<UICoordinateSpace> *_coordinateSpace;
    double _minimumScale;
    double _maximumScale;
}

+ (id)identityTransform;
+ (id)horizontallyDominantTransformWithSourceRect:(struct CGRect)arg1 targetRect:(struct CGRect)arg2 coordinateSpace:(id)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGAffineTransform)affineTransformForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (double)_adjustedZoomScale:(double)arg1;
- (id)inverseTransform;

@end
