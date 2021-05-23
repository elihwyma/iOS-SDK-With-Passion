/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFServiceDescriptor, NSDictionary, NSSet, NSString;

@protocol HFCharacteristicValueSource;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject

{
    NSSet *_allServices;
    NSSet *_characteristics;
    HFServiceDescriptor *_primaryServiceDescriptor;
    id <HFCharacteristicValueSource> _valueSource;
    NSDictionary *_characteristicsByType;
}

@property (copy, nonatomic, readonly) NSDictionary *characteristicsByType;
@property (copy, nonatomic, readonly) NSSet *allServices;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic, readonly) NSSet *characteristics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFServiceDescriptor *primaryServiceDescriptor;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (void)commitTransactionWithReason:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)readValuesForServiceStateRecipe:(id)arg1;
- (id)writeValuesForCharacteristicRecipes:(id)arg1;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3;

@end
