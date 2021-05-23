/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIBarButtonItem.h>

@class UIImage;

@interface MFBarButtonItem : UIBarButtonItem

{
    UIImage *_enabledImage;
    UIImage *_disabledImage;
}

@property (retain, nonatomic) UIImage *enabledImage;
@property (retain, nonatomic) UIImage *disabledImage;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;

@end
