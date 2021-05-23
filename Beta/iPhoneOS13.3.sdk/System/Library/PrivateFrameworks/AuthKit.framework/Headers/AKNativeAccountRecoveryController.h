/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAccountRecoveryContext, CDPRecoveryController, NSString;

@protocol CDPStateUIProvider;

@interface AKNativeAccountRecoveryController : NSObject

{
    CDPRecoveryController *_recoveryController;
    AKAccountRecoveryContext *_recoveryContext;
    id <CDPStateUIProvider> _cdpUiProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)postBodyForiCSCServerUIResponseWithContext:(id)arg1 recoveryError:(id)arg2;
+ (id)requestForRecoveryCompletionWithContext:(id)arg1 recoveredInfo:(id)arg2 recoveryError:(id)arg3;
+ (_Bool)shouldSendServerResponseForRecoveredInfo:(id)arg1 withRecoveryError:(id)arg2;

- (void)dismissNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)arg1;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (void)presentNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;

@end
