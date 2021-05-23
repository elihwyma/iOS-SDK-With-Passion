/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFPlayMusicAction : WFAction

- (long long)repeatMode;
- (long long)shuffleMode;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (void)getContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2;
- (void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)playContentViaMusicPlayer:(id)arg1;
- (void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
