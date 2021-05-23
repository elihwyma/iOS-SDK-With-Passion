/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMAssetBase.h>

@class CEMApplicationEnterpriseDeclaration_AppPackage, CEMAssetBaseDescriptor, NSString;

@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase

{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    NSString *_payloadBundleIdentifier;
    CEMApplicationEnterpriseDeclaration_AppPackage *_payloadAppPackage;
    NSString *_payloadAppPackageHashMD5;
    NSString *_payloadDisplayImage;
    NSString *_payloadDisplayImageHashMD5;
    NSString *_payloadFullSizeImage;
    NSString *_payloadFullSizeImageHashMD5;
}

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) CEMApplicationEnterpriseDeclaration_AppPackage *payloadAppPackage;
@property (copy, nonatomic) NSString *payloadAppPackageHashMD5;
@property (copy, nonatomic) NSString *payloadDisplayImage;
@property (copy, nonatomic) NSString *payloadDisplayImageHashMD5;
@property (copy, nonatomic) NSString *payloadFullSizeImage;
@property (copy, nonatomic) NSString *payloadFullSizeImageHashMD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5 withDisplayImage:(id)arg6 withDisplayImageHashMD5:(id)arg7 withFullSizeImage:(id)arg8 withFullSizeImageHashMD5:(id)arg9;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
