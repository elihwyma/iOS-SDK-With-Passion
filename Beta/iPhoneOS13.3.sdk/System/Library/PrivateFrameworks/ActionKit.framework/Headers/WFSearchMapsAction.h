/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFSearchMapsAction : WFAction

- (id)appIdentifier;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)openMapsLink:(id)arg1 inAppNamed:(id)arg2;
- (void)openMapsURL:(id)arg1 withAppIdentifier:(id)arg2;
- (void)openMapItem:(id)arg1;

@end
