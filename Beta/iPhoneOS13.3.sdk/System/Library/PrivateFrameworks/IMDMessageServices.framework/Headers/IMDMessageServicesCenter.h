/*
 Image: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject

{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_disconnected;
- (_Bool)_disconnect;
- (_Bool)_connect;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_requestExpireStateWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_requestWatchdogWithGUID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestRoutingWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)requestExpireStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestWatchdogWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
