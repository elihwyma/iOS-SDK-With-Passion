/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSString;

@interface CRKRemoteDeviceRequest : CATTaskRequest

{
    NSString *_deviceIdentifier;
    CATTaskRequest *_remoteRequest;
}

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) CATTaskRequest *remoteRequest;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
