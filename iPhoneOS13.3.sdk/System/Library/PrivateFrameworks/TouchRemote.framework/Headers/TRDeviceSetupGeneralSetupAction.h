//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction
{
}

@property(readonly, nonatomic) BOOL rememberPassword;
@property(readonly, nonatomic, getter=isDiagnosticsEnabled) BOOL diagnosticsEnabled;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property(readonly, copy, nonatomic) NSString *homeSharingID;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSString *countryCode;
- (id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(BOOL)arg5 rememberPassword:(BOOL)arg6;
- (id)init;

@end

