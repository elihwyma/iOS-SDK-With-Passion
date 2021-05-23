/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_sendMessage:(id)arg1;
- (id)initWithAppDocument:(id)arg1;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)_newViewModel;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (void)messagePort:(id)arg1 didReceiveMessage:(id)arg2;
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (id)_webAuthenticationViewModelWithViewModel:(id)arg1;
- (_Bool)_updateWebAuthenticationViewModel:(id)arg1 error:(id *)arg2;

@end
