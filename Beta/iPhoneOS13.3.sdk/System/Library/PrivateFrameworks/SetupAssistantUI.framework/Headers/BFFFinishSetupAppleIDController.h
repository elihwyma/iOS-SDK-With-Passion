/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@class AAUISignInController, NSString;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupAppleIDController : NSObject

{
    BFFFinishSetupAppleIDController *_selfReference;
    AAUISignInController *_signInController;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)finishSetupAppleIDController;

- (void)signInController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;
- (id)viewControllerWithCompletion:(CDUnknownBlockType)arg1;

@end
