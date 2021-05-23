/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter

{
    double _threshold;
    double _minimumChangeValue;
}

@property (nonatomic) double minimumChangeValue;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
