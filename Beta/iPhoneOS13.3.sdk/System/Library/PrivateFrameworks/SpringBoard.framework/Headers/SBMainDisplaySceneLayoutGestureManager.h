/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppResizeGestureWorkspaceTransaction, SBMainDisplaySceneLayoutViewController, SBPanSystemGestureRecognizer;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <Swift>

{
    SBPanSystemGestureRecognizer *_resizePanSystemGestureRecognizer;
    SBAppResizeGestureWorkspaceTransaction *_resizePanSystemGestureRecognizerWorkspaceTransaction;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
}

@property (weak, nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)transactionDidComplete:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (void)_handleResizePanSystemGestureRecognizer:(id)arg1;
- (_Bool)_hasActiveModalFloatingApplication;
- (_Bool)_allowSystemGestureRecognizer:(id)arg1 withSystemGestureType:(unsigned long long)arg2 toReceiveTouch:(id)arg3;
- (void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1;
- (_Bool)_hasActiveSystemGestureRecognizerWorkspaceTransaction;

@end
