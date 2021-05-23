/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext, NSString;

@interface CDPDSecureBackupProxyImpl : NSObject

{
    CDPContext *_cdpContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) CDPContext *cdpContext;

- (id)initWithContext:(id)arg1;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)_secureBackup;
- (id)accountInfoWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)disableWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)enableWithInfo:(id)arg1 error:(id *)arg2;
- (id)recoverWithInfo:(id)arg1 error:(id *)arg2;
- (void)cacheRecoveryKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)uncacheAllSecrets;

@end
