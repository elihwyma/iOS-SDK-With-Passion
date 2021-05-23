/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, SSMachineDataRequest;

@interface ISMachineDataActionOperation

{
    _Bool _blocksPurchaseRequests;
    _Bool _hidesServerDrivenDialogs;
    SSMachineDataRequest *_request;
    CDUnknownBlockType _resultBlock;
    NSString *_syncState;
    NSString *_userAgent;
}

@property (readonly) SSMachineDataRequest *machineDataRequest;
@property _Bool blocksPurchaseRequests;
@property _Bool hidesServerDrivenDialogs;
@property (copy) CDUnknownBlockType resultBlock;
@property (copy) NSString *userAgent;
@property (readonly) NSString *syncState;

- (void)run;
- (_Bool)_shouldRetryAfterError:(id)arg1;
- (id)uniqueKey;
- (id)initWithMachineDataRequest:(id)arg1;
- (_Bool)_provisionWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_syncMachineWithRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_eraseProvisioning;

@end
