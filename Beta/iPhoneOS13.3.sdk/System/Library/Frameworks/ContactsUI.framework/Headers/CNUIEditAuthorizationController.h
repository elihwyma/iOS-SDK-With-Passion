/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol CNUIEditAuthorizationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNUIEditAuthorizationController : NSObject

{
    _Bool _animated;
    id <CNUIEditAuthorizationControllerDelegate> _delegate;
    id _sender;
    UIViewController *_guardedViewController;
}

@property (weak, nonatomic) id <CNUIEditAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id sender;
@property (nonatomic) _Bool animated;
@property (weak, nonatomic) UIViewController *guardedViewController;

- (void)dealloc;
- (void)presentAuthorizationUI;
- (void)lockoutRestrictionsPINControllerDidFinish:(id)arg1;
- (void)didAutorize;
- (void)didNotAuthorize;

@end
