/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@class CEMAnyPayload, NSArray, NSString;

@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase

{
    NSArray *_payloadRequiredConfigurations;
    NSArray *_payloadStandardConfigurations;
    CEMAnyPayload *_payloadActivationPredicate;
}

@property (copy, nonatomic) NSArray *payloadRequiredConfigurations;
@property (copy, nonatomic) NSArray *payloadStandardConfigurations;
@property (copy, nonatomic) CEMAnyPayload *payloadActivationPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3 withActivationPredicate:(id)arg4;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
