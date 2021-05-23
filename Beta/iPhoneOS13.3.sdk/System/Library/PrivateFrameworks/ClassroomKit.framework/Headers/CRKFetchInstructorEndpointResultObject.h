/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSXPCListenerEndpoint;

@interface CRKFetchInstructorEndpointResultObject : CATTaskResultObject

{
    NSXPCListenerEndpoint *_endpoint;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
