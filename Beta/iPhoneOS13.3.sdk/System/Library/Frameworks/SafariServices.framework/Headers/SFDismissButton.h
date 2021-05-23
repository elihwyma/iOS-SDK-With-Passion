/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface SFDismissButton : UIButton

{
    long long _style;
}

@property (nonatomic) long long style;

- (id)init;
- (void)_updateButtonStyle;
- (id)_titleForDismissButtonStyle:(long long)arg1;

@end
