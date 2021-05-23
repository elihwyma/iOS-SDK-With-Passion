/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueSource, HFOverrideCharacteristicValueProvider;

@interface HFOverrideCharacteristicValueSource : NSObject

{
    id <HFCharacteristicValueSource> _originalValueSource;
    id <HFOverrideCharacteristicValueProvider> _overrideValueProvider;
}

@property (nonatomic, readonly) id <HFCharacteristicValueSource> originalValueSource;
@property (weak, nonatomic) id <HFOverrideCharacteristicValueProvider> overrideValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFCharacteristicOperationContextProviding> contextProvider;

+ (id)na_identity;

- (_Bool)isEqual:(id)arg1;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (void)commitTransactionWithReason:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2;

@end
