/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkHeaderPlatterView : UIView

{
    NSString *_labelText;
    UIImage *_accessoryImage;
    UILabel *_label;
    UIImageView *_accessory;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *accessory;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIImage *accessoryImage;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2;
- (void)_updateForFocusedState:(_Bool)arg1;

@end
