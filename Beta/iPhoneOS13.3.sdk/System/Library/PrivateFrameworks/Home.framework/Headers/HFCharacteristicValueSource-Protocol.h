/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@protocol HFCharacteristicOperationContextProviding;

@protocol HFCharacteristicValueSource <Swift>

@property (nonatomic, readonly) id <HFCharacteristicOperationContextProviding> contextProvider;

- (unsigned short)readValuesForCharacteristics: /* Error: Ran out of types for this method. */;
- (unsigned short)writeValuesForCharacteristics: /* Error: Ran out of types for this method. */;
- (unsigned short)cachedValueForCharacteristic: /* Error: Ran out of types for this method. */;
- (unsigned short)readValuesForCharacteristicTypes:inServices: /* Error: Ran out of types for this method. */;

@end
