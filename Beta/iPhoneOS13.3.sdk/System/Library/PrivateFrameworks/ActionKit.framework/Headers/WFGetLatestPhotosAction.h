/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFGetLatestPhotosAction : WFAction

+ (id)cameraRollAlbumName;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (long long)initialSuggestionBehavior;

@end
