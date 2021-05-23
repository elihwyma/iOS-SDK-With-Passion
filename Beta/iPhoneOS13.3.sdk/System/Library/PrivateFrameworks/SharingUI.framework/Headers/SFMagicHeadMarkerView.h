/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SFMagicHeadMarkerView : UIView

{
    double _positionDegree;
    double _containerRadius;
    double _currentOffset;
}

@property (readonly) double currentOffset;

- (void)updateMarkerWithDegreeOffset:(double)arg1;
- (id)initWithPositionDegree:(double)arg1 containerRadius:(double)arg2;

@end
