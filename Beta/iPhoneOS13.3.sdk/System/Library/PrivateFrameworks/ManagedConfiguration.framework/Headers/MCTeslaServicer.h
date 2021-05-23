/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload, NSString, NSXPCConnection;

@interface MCTeslaServicer : NSObject

{
    CDUnknownBlockType _callback;
    NSXPCConnection *_connection;
    NSString *_nonce;
    MCDeviceUploadCredentials *_userCredentials;
    MCDeviceUploadOrganization *_organization;
    MCDeviceUploadSubmitDeviceRequestPayload *_deviceUploadRequest;
}

@property (copy, nonatomic) CDUnknownBlockType callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) MCDeviceUploadCredentials *userCredentials;
@property (retain, nonatomic) MCDeviceUploadOrganization *organization;
@property (retain, nonatomic) MCDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest;

- (id)init;
- (void)dealloc;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)unenrollWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_connectionError;
- (void)_completeServiceWithSuccess:(_Bool)arg1 response:(id)arg2 error:(id)arg3;
- (void)_callServiceByType:(long long)arg1 onProxy:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_retrieveProxyObjectAndRunServiceType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
