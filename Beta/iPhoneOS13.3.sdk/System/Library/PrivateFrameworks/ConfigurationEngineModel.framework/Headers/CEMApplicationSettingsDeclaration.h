/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadDiagnosticSubmission;
    NSNumber *_payloadAppAnalytics;
    NSNumber *_payloadAllowDiagnosticSubmission;
    NSArray *_payloadAutonomousSingleAppModePermittedAppIDs;
    NSNumber *_payloadAllowActivityContinuation;
    NSNumber *_payloadAllowEnterpriseAppTrust;
    NSNumber *_payloadAllowDiagnosticSubmissionModification;
    NSNumber *_payloadAllowAutomaticAppUpdates;
    NSNumber *_payloadAllowAutomaticAppUpdatesModification;
}

@property (copy, nonatomic) NSNumber *payloadDiagnosticSubmission;
@property (copy, nonatomic) NSNumber *payloadAppAnalytics;
@property (copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmission;
@property (copy, nonatomic) NSArray *payloadAutonomousSingleAppModePermittedAppIDs;
@property (copy, nonatomic) NSNumber *payloadAllowActivityContinuation;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseAppTrust;
@property (copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmissionModification;
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdates;
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdatesModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withDiagnosticSubmission:(id)arg2 withAppAnalytics:(id)arg3 withAllowDiagnosticSubmission:(id)arg4 withAutonomousSingleAppModePermittedAppIDs:(id)arg5 withAllowActivityContinuation:(id)arg6 withAllowEnterpriseAppTrust:(id)arg7 withAllowDiagnosticSubmissionModification:(id)arg8 withAllowAutomaticAppUpdates:(id)arg9 withAllowAutomaticAppUpdatesModification:(id)arg10;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
