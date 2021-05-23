/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HFServiceDescriptor;

@protocol HFCharacteristicValueSource;

@protocol HFAggregatedCharacteristicValueSource <Swift>

@property (nonatomic, readonly) HFServiceDescriptor *primaryServiceDescriptor;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;

- (unsigned short)allServices;
- (unsigned short)copyWithValueSource: /* Error: Ran out of types for this method. */;
- (unsigned short)readValuesForCharacteristicTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)writeValuesForCharacteristicTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)metadataForCharacteristicType: /* Error: Ran out of types for this method. */;
- (unsigned short)readValuesForServiceStateRecipe: /* Error: Ran out of types for this method. */;
- (unsigned short)writeValuesForCharacteristicRecipes: /* Error: Ran out of types for this method. */;
- (unsigned short)allCharacteristicsForCharacteristicType: /* Error: Ran out of types for this method. */;

@end
