/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@protocol CDPStateUIProvider;

@interface CDPStateUIProviderProxy : NSObject

{
    id <CDPStateUIProvider> _uiProvider;
}

@property (retain, nonatomic) id <CDPStateUIProvider> uiProvider;

- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUIProvider:(id)arg1;

@end
