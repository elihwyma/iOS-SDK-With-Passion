/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFFaceIDViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController

{
    NSString *_passcode;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) NSString *passcode;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (id)init;
- (id)passcodeForFaceIDViewController:(id)arg1;
- (void)faceIDViewController:(id)arg1 didCompleteWithResult:(unsigned long long)arg2 pushedViewControllers:(id)arg3;

@end
