/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface IDSRemoteCredential : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    _Bool _wantsRetries;
}

@property (nonatomic) _Bool wantsRetries;

- (void)dealloc;
- (void)_disconnected;
- (_Bool)_disconnect;
- (_Bool)_connect;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(_Bool)arg3 allowQuery:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
