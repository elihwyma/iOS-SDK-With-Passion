/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject

{
    CUMessageSession *_sharingSession;
    _Bool _approverBackupRecordsExist;
    unsigned long long _approveriCloudKeychainState;
    _Bool _sentInitialResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContext:(id)arg1;
- (void)sendPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (void)listenForPayloadsWithHandler:(CDUnknownBlockType)arg1;
- (void)setApproverBackupRecordsExist:(_Bool)arg1;
- (void)setApproveriCloudKeychainState:(unsigned long long)arg1;

@end
