/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

#import <RemoteManagementModel/RMModelActivationBase.h>

@class NSArray, NSString, RMModelPredicateBase;

@interface RMModelActivationSimpleDeclaration : RMModelActivationBase

{
    NSArray *_payloadStandardConfigurations;
    RMModelPredicateBase *_payloadPredicate;
}

@property (copy, nonatomic) NSArray *payloadStandardConfigurations;
@property (copy, nonatomic) RMModelPredicateBase *payloadPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildWithIdentifier:(id)arg1 standardConfigurations:(id)arg2 predicate:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 standardConfigurations:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
