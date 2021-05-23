/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface AAUICDPHelper : NSObject

{
    UIViewController *_presentingViewController;
    _Bool _forceInline;
}

@property (nonatomic) _Bool forceInline;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;

+ (id)cdpContextForPrimaryAccount;
+ (id)helperWithPresenter:(id)arg1;
+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
+ (id)cdpContextForAccount:(id)arg1;

- (id)cdpStateControllerForPrimaryAccount;
- (id)cdpStateControllerWithContext:(id)arg1;

@end
