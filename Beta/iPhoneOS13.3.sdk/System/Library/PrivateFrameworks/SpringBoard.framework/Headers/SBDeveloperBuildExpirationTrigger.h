/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, SBAlertItemsController, SBMainDisplayWorkspaceAppInteractionEventSource;

@interface SBDeveloperBuildExpirationTrigger : NSObject

{
    SBAlertItemsController *_alertItemsController;
    SBMainDisplayWorkspaceAppInteractionEventSource *_eventSource;
    NSDate *_expirationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAlertItemsController:(id)arg1 eventSource:(id)arg2;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)_coverSheetDidDismiss:(id)arg1;
- (id)_initWithAlertItemsController:(id)arg1 eventSource:(id)arg2 expirationDate:(id)arg3;
- (void)showDeveloperBuildExpirationAlertIfNecessaryFromLockscreen:(_Bool)arg1 toLauncher:(_Bool)arg2;

@end
