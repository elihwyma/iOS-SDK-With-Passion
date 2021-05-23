/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

@class GKRemoteUIController, NSString;

@interface GKRemoteUINavigationController : UINavigationController

{
    GKRemoteUIController *_remoteUIController;
}

@property (nonatomic, readonly) GKRemoteUIController *remoteUIController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithRemoteUIController:(id)arg1;
- (_Bool)_gkUsesBubbleFlowModalPresentation;
- (_Bool)_gkCanBeRemovedFromParentWhenCovered;

@end
