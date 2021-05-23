/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICFPLeaseSyncSession : NSObject

{
    struct FPLeaseSyncOpaque_ *_fpLeaseSync;
    struct FairPlayHWInfo_ _hardwareInfo;
    unsigned int _mediaKind;
    unsigned long long _accountID;
    id _leaseID;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly) id leaseID;
@property (nonatomic, readonly) unsigned int mediaKind;

+ (id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned int)arg3 returningLeaseSyncRequestData:(id *)arg4 error:(id *)arg5;

- (void)dealloc;
- (id)_initWithFPLeaseSync:(struct FPLeaseSyncOpaque_ *)arg1 leaseID:(id)arg2 accountID:(unsigned long long)arg3 hardwareInfo:(struct FairPlayHWInfo_)arg4 mediaKind:(unsigned int)arg5;
- (_Bool)endLeaseSyncAndReturnError:(id *)arg1;
- (_Bool)getLeaseSyncRenewRequestData:(id *)arg1 error:(id *)arg2;
- (_Bool)importLeaseSyncResponseData:(id)arg1 error:(id *)arg2;
- (_Bool)processRenewResponseData:(id)arg1 error:(id *)arg2;

@end
