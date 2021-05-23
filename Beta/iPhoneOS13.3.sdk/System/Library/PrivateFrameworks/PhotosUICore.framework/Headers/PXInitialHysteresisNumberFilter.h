/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXInitialHysteresisNumberFilter : PXNumberFilter

{
    _Bool _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property (nonatomic) double hysteresis;
@property (nonatomic, readonly) double outputDerivative;

- (double)updatedOutput;

@end
