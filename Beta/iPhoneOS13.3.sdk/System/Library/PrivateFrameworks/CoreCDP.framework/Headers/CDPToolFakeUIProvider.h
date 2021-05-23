/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPToolFakeUIProvider : NSObject

{
    NSString *_localSecret;
    NSString *_remoteSecret;
    NSString *_icsc;
    NSString *_recoveryKey;
}

@property (copy, nonatomic) NSString *localSecret;
@property (copy, nonatomic) NSString *remoteSecret;
@property (copy, nonatomic) NSString *icsc;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;

@end
