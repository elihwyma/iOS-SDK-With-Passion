/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSData, NSString;

@interface ISMachineDataProvisioningOperation

{
    unsigned long long _accountID;
    _Bool _allowsBootstrapCellularData;
    _Bool _hidesServerDrivenDialogs;
    NSData *_inputData;
    long long _protocolVersion;
    NSString *_userAgent;
}

@property _Bool allowsBootstrapCellularData;
@property _Bool hidesServerDrivenDialogs;
@property long long protocolVersion;
@property (copy) NSString *userAgent;

- (void)run;
- (id)initWithAccountIdentifier:(unsigned long long)arg1 provisioningData:(id)arg2;
- (id)_newFinishProvisioningOperationWithData:(id)arg1;
- (_Bool)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned int)arg2 error:(id *)arg3;

@end
