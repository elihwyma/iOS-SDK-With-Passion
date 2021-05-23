/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController

{
    IKViewElement *_regenerateCodeButtonElement;
}

@property (retain, nonatomic) IKViewElement *regenerateCodeButtonElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didAddMessagesToMessageQueue:(id)arg1;
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;
- (void)_startObservingViewModel:(id)arg1;
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (_Bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;

@end
