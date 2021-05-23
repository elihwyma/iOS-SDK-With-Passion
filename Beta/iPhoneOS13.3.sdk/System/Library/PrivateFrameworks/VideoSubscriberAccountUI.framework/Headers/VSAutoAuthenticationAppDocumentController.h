/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController

{
    IKViewElement *_buttonLockupElement;
}

@property (retain, nonatomic) IKViewElement *buttonLockupElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_newViewModel;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_autoAuthenticationViewModelWithViewModel:(id)arg1;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 error:(id *)arg2;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2;
- (void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1;

@end
