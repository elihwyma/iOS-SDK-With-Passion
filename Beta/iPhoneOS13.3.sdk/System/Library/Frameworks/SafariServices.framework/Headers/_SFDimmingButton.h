/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIButton.h>

@interface _SFDimmingButton : UIButton

{
    double _normalImageAlpha;
    double _highlightedImageAlpha;
    double _highlightAnimationDuration;
}

@property (nonatomic) double normalImageAlpha;
@property (nonatomic) double highlightedImageAlpha;
@property (nonatomic) double highlightAnimationDuration;

- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateImageAlpha;

@end
