/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@class CEMPredicateBase, NSArray, NSString;

@interface CEMActivationSimpleDeclaration : CEMDeclarationBase

{
    NSArray *_payloadStandardConfigurations;
    CEMPredicateBase *_payloadPredicate;
}

@property (copy, nonatomic) NSArray *payloadStandardConfigurations;
@property (copy, nonatomic) CEMPredicateBase *payloadPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2 withPredicate:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
