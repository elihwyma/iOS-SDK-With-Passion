/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter

{
    double _sustainDuration;
    double _highValue;
    double _lastDecreaseTime;
}

@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic) double highValue;
@property (nonatomic) double lastDecreaseTime;
@property (nonatomic) double sustainDuration;

- (void)setInput:(double)arg1;
- (id)initWithInput:(double)arg1;
- (double)updatedOutput;

@end
