/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@interface NTKEditOptionPickerSideView : UIView

{
    double _contentAlpha;
    struct CGAffineTransform _contentTransform;
    UIView *_optionView;
}

@property (retain, nonatomic) UIView *optionView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setRotationFromFront:(double)arg1;
- (void)applyContentTransform:(struct CGAffineTransform)arg1;
- (void)_applyContentAlpha;

@end
