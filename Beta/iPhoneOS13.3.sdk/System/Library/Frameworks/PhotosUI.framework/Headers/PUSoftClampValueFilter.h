/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUClampValueFilter.h>

@interface PUSoftClampValueFilter : PUClampValueFilter

{
    double _resistance;
}

@property (nonatomic) double resistance;

+ (id)scrollViewFilter;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
