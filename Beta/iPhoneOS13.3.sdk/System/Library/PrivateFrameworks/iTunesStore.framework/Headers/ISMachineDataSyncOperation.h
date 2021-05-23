/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSData, NSString;

@interface ISMachineDataSyncOperation

{
    unsigned long long _accountID;
    _Bool _allowsBootstrapCellularData;
    _Bool _hidesServerDrivenDialogs;
    NSData *_inputData;
    long long _protocolVersion;
    NSString *_syncState;
    NSString *_userAgent;
}

@property _Bool allowsBootstrapCellularData;
@property _Bool hidesServerDrivenDialogs;
@property long long protocolVersion;
@property (copy) NSString *userAgent;
@property (readonly) NSString *syncState;

- (void)run;
- (id)initWithAccountIdentifier:(unsigned long long)arg1 syncData:(id)arg2;
- (id)_newSyncOperationWithClientData:(id)arg1 machineIDData:(id)arg2;

@end
