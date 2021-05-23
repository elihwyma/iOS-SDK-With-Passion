/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class MCDeviceUploadRequestType, MCDeviceUploadUser, NSString;

@interface MCDeviceUploadSubmitDeviceRequestPayload : NSObject

{
    NSString *_orgId;
    NSString *_orgName;
    MCDeviceUploadRequestType *_requestType;
    MCDeviceUploadUser *_submitter;
    MCDeviceUploadUser *_approver;
    NSString *_soldToId;
}

@property (nonatomic, readonly) NSString *orgId;
@property (nonatomic, readonly) NSString *orgName;
@property (nonatomic, readonly) MCDeviceUploadRequestType *requestType;
@property (nonatomic, readonly) MCDeviceUploadUser *submitter;
@property (nonatomic, readonly) MCDeviceUploadUser *approver;
@property (nonatomic, readonly) NSString *soldToId;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrgId:(id)arg1 orgName:(id)arg2 requestType:(id)arg3 submitter:(id)arg4 approver:(id)arg5 soldToId:(id)arg6;

@end
