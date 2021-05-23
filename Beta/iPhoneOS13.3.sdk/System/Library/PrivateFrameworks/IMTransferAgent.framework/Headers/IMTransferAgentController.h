/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <Foundation/NSObject.h>

@class MMCSController;

@interface IMTransferAgentController : NSObject

{
    MMCSController *_controller;
}

@property (retain, nonatomic) MMCSController *controller;

+ (id)sharedInstance;

- (void)dealloc;
- (_Bool)_isWhiteListedURL:(id)arg1;
- (void)cancelSendTransferID:(id)arg1;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 userInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (_Bool)_shouldRetryUploadGivenMMCSError:(id)arg1 retryAttemptCount:(unsigned long long)arg2;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 retryAttemptCount:(unsigned long long)arg4 userInfo:(id)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)_defaultMMCSWhiteList;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(_Bool)arg7 fileSize:(unsigned long long)arg8 progressBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end
