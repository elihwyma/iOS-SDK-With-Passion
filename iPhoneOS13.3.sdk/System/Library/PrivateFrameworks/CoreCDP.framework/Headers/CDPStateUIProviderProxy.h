//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPStateUIProviderInternal-Protocol.h>

@protocol CDPStateUIProvider;

@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal>
{
    id <CDPStateUIProvider> _uiProvider;
}

@property(retain, nonatomic) id <CDPStateUIProvider> uiProvider; // @synthesize uiProvider=_uiProvider;
// - (void).cxx_destruct;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* CDUnknownBlockType */)arg2;
- (id)initWithUIProvider:(id)arg1;

@end

