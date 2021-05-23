/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase

{
    NSString *_payloadBundleIdentifier;
    NSString *_payloadTeamIdentifier;
}

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSString *payloadTeamIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
