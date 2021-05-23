/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIRootWindowScenePresentationBinder.h>

@class NSMutableArray, UIRootSceneWindow, UIWindowScene;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder

{
    UIRootSceneWindow *_rootWindow;
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

@property (nonatomic, readonly) UIRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (id)init;
- (id)assertDisconnectionFromRenderServerForReason:(id)arg1;
- (void)_reconnectToRenderServer;
- (void)_disconnectFromRenderServer;

@end
