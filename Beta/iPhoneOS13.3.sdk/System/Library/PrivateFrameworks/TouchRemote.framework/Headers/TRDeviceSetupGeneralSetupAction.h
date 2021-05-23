/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction

@property (copy, nonatomic, readonly) NSString *countryCode;
@property (copy, nonatomic, readonly) NSString *language;
@property (copy, nonatomic, readonly) NSString *homeSharingID;
@property (copy, nonatomic, readonly) NSString *homeSharingGroupID;
@property (nonatomic, readonly) _Bool rememberPassword;
@property (nonatomic, readonly, getter=isDiagnosticsEnabled) _Bool diagnosticsEnabled;

- (id)init;
- (id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(_Bool)arg5 rememberPassword:(_Bool)arg6;

@end
