/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUDynamicValueFilter : PUValueFilter

{
    double _targetValue;
    double _currentTime;
}

@property (nonatomic) double targetValue;
@property (nonatomic) double currentTime;

- (id)init;
- (void)_update;
- (void)setInputValue:(double)arg1;
- (double)outputValue;
- (double)outputValueChangeRate;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;

@end
