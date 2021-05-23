/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class UIView;

@protocol CNUIObjectViewControllerDelegate;

@protocol CNUIObjectViewController <Swift>

@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

@end
