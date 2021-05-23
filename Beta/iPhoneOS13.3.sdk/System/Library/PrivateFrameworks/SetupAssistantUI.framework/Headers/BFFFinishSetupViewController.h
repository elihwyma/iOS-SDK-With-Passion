/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <CoreFollowUpUI/FLExtensionViewController.h>

@class BFFNavigationController, FLFollowUpAction, NSMutableArray, NSMutableSet, UIViewController;

@interface BFFFinishSetupViewController : FLExtensionViewController

{
    _Bool _setupInProgress;
    BFFNavigationController *_navigationController;
    FLFollowUpAction *_followUpAction;
    NSMutableArray *_flowIdentifiers;
    NSMutableSet *_completedFlowIdentifiers;
    NSMutableSet *_skippedFlowIdentifiers;
    UIViewController *_newRootViewController;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _overrideFlowControllerGenerator;
}

+ (id)_keyValueDictionaryForURL:(id)arg1;
+ (id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg1;

- (void)_complete;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)didSkipFlowInFinishSetup:(id)arg1;
- (_Bool)didCompleteFlowInFinishSetup:(id)arg1;
- (void)_startNextFlowIdentifier;
- (id)_flowControllerForNextFlowIdentifier;
- (_Bool)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg1;
- (void)_didSatisfyPreconditionsForFlowController:(id)arg1;
- (void)_flowDidFinishForIdentifiers:(id)arg1 result:(unsigned long long)arg2;
- (void)_performExtendedInitializationForFlowController:(id)arg1;
- (void)_didSatisfyInitializationForFlowController:(id)arg1;
- (void)_pushViewControllerOntoNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensureNavigationControllerWithViewController:(id)arg1 pushCompletion:(CDUnknownBlockType)arg2;
- (id)_flowControllerForFlowIdentifier:(id)arg1;
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOverrideFlowControllerGenerator:(CDUnknownBlockType)arg1;

@end
