/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSXPCListenerEndpoint;

@interface DMFFetchClassroomInstructorEndpointResultObject : CATTaskResultObject

{
    NSXPCListenerEndpoint *_endpoint;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;

@end
