/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, CNAvatarView;

__attribute__((visibility("hidden")))
@interface CNContactGridClippingView : UIView

{
    CNAvatarView *_avatarView;
    CAShapeLayer *_actionsMaskLayer;
}

@property (weak, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CAShapeLayer *actionsMaskLayer;
@property (nonatomic) _Bool masksToAvatar;

- (void)layoutSubviews;

@end
