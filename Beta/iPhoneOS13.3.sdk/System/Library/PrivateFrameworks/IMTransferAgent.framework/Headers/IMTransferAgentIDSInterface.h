/*
 Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;

@interface IMTransferAgentIDSInterface : NSObject

{
    IDSService *_idsService;
    NSMutableDictionary *_uniqueIDToTransferCompletionBlockMap;
    int _numTransfers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (_Bool)_sendIDSMessage:(id)arg1;
- (void)_sendUploadRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 allowReauthorize:(_Bool)arg4;
- (void)decrementTransferCount;
- (void)incrementTransferCount;
- (void)_sendUploadResponse:(id)arg1 success:(_Bool)arg2 error:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 requestURLString:(id)arg6 transferID:(id)arg7;
- (void)_handleUploadRequest:(id)arg1;
- (void)_handleUploadResponse:(id)arg1;
- (_Bool)isLocalDevicePresent;
- (void)remoteUploadFileRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (int)currentTransfers;
- (id)localCompanionDevice;

@end
