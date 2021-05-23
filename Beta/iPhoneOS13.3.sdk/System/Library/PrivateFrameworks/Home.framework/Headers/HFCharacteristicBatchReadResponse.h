/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicBatchReadResponse : NSObject <Swift>

{
    id <HFCharacteristicOperationContextProviding> _contextProvider;
    NSSet *_allReadResponses;
    NSDictionary *_responseKeyedByCharacteristicUUID;
    NSDictionary *_responsesKeyedByCharacteristicType;
}

@property (nonatomic, readonly) NSDictionary *responseKeyedByCharacteristicUUID;
@property (nonatomic, readonly) NSDictionary *responsesKeyedByCharacteristicType;
@property (nonatomic, readonly) id <HFCharacteristicOperationContextProviding> contextProvider;
@property (nonatomic, readonly) NSSet *allReadResponses;
@property (nonatomic, readonly) NSSet *allCharacteristics;
@property (nonatomic, readonly) NSSet *allCharacteristicTypes;
@property (nonatomic, readonly) NSSet *allServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)aggregatedMetadataForCharacteristics:(id)arg1;
+ (id)aggregatedReadResponseFromResponses:(id)arg1 withAggregationPolicy:(unsigned long long)arg2;
+ (id)_aggregatedValueForValues:(id)arg1 withAggregationPolicy:(unsigned long long)arg2 metadata:(id)arg3;
+ (id)_mostAbnormalValueForValues:(id)arg1;
+ (id)_averageValueForValues:(id)arg1 metadata:(id)arg2;
+ (id)_mostCommonValueForValues:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)responseForCharacteristicType:(id)arg1;
- (id)allResponsesForCharacteristicType:(id)arg1;
- (id)allResponsesForCharacteristicTypes:(id)arg1;
- (id)initWithReadResponses:(id)arg1 contextProvider:(id)arg2;
- (id)responseForCharacteristicRecipe:(id)arg1;
- (id)batchResponseForService:(id)arg1;
- (id)responseForCharacteristicType:(id)arg1 inService:(id)arg2;
- (id)servicesWithValuesPassingTest:(CDUnknownBlockType)arg1 forCharacteristicType:(id)arg2;
- (id)servicesWithValue:(id)arg1 forCharacteristicType:(id)arg2;
- (id)responseForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2;
- (unsigned long long)defaultAggregationPolicyForCharacteristicType:(id)arg1;
- (id)responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2;
- (id)_responseForCharacteristicType:(id)arg1 aggregationPolicy:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
- (id)allResponsesForCharacteristicRecipe:(id)arg1;
- (id)_aggregatedMetadataForCharacteristicType:(id)arg1;
- (id)responseForCharacteristic:(id)arg1;
- (id)responseForCharacteristicType:(id)arg1 inService:(id)arg2 aggregationPolicy:(unsigned long long)arg3;
- (id)allResponsesForCharacteristicType:(id)arg1 inServicesOfTypes:(id)arg2;
- (id)servicesWithErrorForCharacteristicType:(id)arg1;

@end
