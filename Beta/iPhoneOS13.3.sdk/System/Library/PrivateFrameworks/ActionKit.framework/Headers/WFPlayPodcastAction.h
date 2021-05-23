/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFPlayPodcastAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (id)getPlaybackURLForContentItem:(id)arg1;
- (id)contentNotFoundError;
- (id)genericPlayPodcastFailedError;
- (id)errorPlayingPodcast:(unsigned int)arg1;

@end
