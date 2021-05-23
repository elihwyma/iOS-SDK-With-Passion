/*
 Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface MLUBlurryView : UIView

{
    _Bool _hasActivated;
    _Bool _shouldRasterizeForTransition;
}

@property double blurRadius;
@property (nonatomic) _Bool shouldRasterizeForTransition;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_activateBlurring;

@end
