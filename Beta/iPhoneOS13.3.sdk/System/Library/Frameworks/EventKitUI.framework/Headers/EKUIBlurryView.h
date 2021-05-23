/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@interface EKUIBlurryView : UIView

{
    _Bool _hasActivated;
    _Bool _shouldRasterizeForTransition;
}

@property double blurRadius;
@property (nonatomic) _Bool shouldRasterizeForTransition;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_activateBlurring;

@end
