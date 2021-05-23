/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ContactsUI/CNAvatarView.h>

@class NSString, UIViewController;

@interface CKAvatarView : CNAvatarView

{
    UIViewController *_presentingViewController;
    NSString *_preferredHandle;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) NSString *preferredHandle;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end
