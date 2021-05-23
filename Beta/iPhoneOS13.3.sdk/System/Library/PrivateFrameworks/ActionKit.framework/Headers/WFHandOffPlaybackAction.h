/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFHandOffPlaybackAction : WFAction

- (id)localEndpoint;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWhenInvokedThroughHomePodWithSpecifiedDescriptor:(id)arg1 picker:(id)arg2;
- (void)runWhenInvokedThroughLocalDeviceWithSpecifiedDescriptor:(id)arg1 picker:(id)arg2;
- (void)runWithSourceRouteUID:(id)arg1 destinationRouteUID:(id)arg2 routePicker:(id)arg3;
- (id)invokingHomePodRouteDescriptor;
- (void)findInvokingHomePodEndpointWithRoutePicker:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)askForUserSpecificationOfMissingRouteWithRoutePicker:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)sourceRouteDescriptor;
- (id)destinationRouteDescriptor;
- (id)errorFromRoutePickerError:(id)arg1;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)arg1 involvedRouteName:(id)arg2;

@end
