/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUClampValueFilter : PUValueFilter

{
    double _minimumValue;
    double _maximumValue;
}

@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
