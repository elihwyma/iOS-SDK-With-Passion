/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase

{
    NSString *_payloadApplication;
    NSNumber *_payloadAllowed;
    NSString *_payloadBundleID;
}

@property (copy, nonatomic) NSString *payloadApplication;
@property (copy, nonatomic) NSNumber *payloadAllowed;
@property (copy, nonatomic) NSString *payloadBundleID;

+ (id)allowedPayloadKeys;
+ (id)buildWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;
+ (id)buildRequiredOnlyWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
