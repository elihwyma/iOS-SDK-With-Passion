/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase

{
    NSArray *_payloadApps;
    NSArray *_payloadWebSites;
    NSArray *_payloadCategories;
}

@property (copy, nonatomic) NSArray *payloadApps;
@property (copy, nonatomic) NSArray *payloadWebSites;
@property (copy, nonatomic) NSArray *payloadCategories;

+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
