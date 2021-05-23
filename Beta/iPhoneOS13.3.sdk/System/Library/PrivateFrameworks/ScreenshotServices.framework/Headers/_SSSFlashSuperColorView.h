/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <UIKit/UIView.h>

@interface _SSSFlashSuperColorView : UIView

{
    unsigned long long _style;
}

@property (nonatomic) unsigned long long style;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateBackgroundColor;

@end
