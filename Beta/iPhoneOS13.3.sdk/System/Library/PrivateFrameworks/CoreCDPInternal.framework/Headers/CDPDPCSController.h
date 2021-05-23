/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPContext;

@protocol CDPProtectedCloudStorageProxy;

@interface CDPDPCSController : NSObject

{
    id <CDPProtectedCloudStorageProxy> _pcsProxy;
    CDPContext *_context;
}

@property (retain, nonatomic) id <CDPProtectedCloudStorageProxy> pcsProxy;
@property (retain, nonatomic) CDPContext *context;

- (id)init;
- (id)_contextSetupDictionary;
- (void)checkiCDPStatusNetwork:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_checkiCDPStatusNetwork:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (struct _PCSIdentitySetData *)_getOrSetupIdentitySetRef:(id *)arg1;
- (void)_enableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 pcsProxy:(id)arg2;
- (void)recoverKeysWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverAndSynchronizeKeysWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isCloudProtectionEnabledLocally:(id *)arg1;
- (_Bool)isCompanionInKeychainCircle:(id *)arg1;
- (void)enableCDPWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableCDPWithCompletion:(CDUnknownBlockType)arg1;

@end
