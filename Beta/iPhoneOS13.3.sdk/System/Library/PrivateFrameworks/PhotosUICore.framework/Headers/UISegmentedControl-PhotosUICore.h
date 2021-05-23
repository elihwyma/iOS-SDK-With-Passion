/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UISegmentedControl.h>

@interface UISegmentedControl (PhotosUICore)

@property (nonatomic, setter=px_setMinimumSegmentWidth:) double px_minimumSegmentWidth;

+ (double)px_defaultMinimumSegmentWidth;

- (struct CGSize)_pxswizzled_sizeThatFits:(struct CGSize)arg1;

@end
