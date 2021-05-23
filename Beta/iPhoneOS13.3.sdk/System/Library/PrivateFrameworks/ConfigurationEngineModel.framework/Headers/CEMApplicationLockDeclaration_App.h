/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMApplicationLockDeclaration_AppOptions, CEMApplicationLockDeclaration_AppUserEnabledOptions, NSString;

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase

{
    NSString *_payloadIdentifier;
    CEMApplicationLockDeclaration_AppOptions *_payloadOptions;
    CEMApplicationLockDeclaration_AppUserEnabledOptions *_payloadUserEnabledOptions;
}

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppOptions *payloadOptions;
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppUserEnabledOptions *payloadUserEnabledOptions;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withOptions:(id)arg2 withUserEnabledOptions:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
