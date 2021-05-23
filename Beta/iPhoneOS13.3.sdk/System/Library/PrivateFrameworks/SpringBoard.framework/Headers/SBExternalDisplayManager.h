/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayLayoutPublisher, NSMutableDictionary, NSString, SBMainDisplaySceneManager, SBMainWorkspace;

@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayManager : NSObject

{
    SBMainWorkspace *_mainWorkspace;
    id <SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayLayoutPublisher *_layoutPublisher;
    NSMutableDictionary *_displayToControllerMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)initWithMainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainSceneManager:(id)arg3;

@end
