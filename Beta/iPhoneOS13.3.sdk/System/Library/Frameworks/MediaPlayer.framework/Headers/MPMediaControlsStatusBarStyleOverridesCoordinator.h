/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaControls, NSString, SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject

{
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    MPMediaControls *_mediaControls;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (void)presentMediaControls;

@end
