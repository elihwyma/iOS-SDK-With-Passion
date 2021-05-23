/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HMCharacteristicMetadata, NSArray, NSMutableDictionary, NSSet;

@interface HFMultiStateValueSet : NSObject <Swift>

{
    HMCharacteristicMetadata *_characteristicMetadata;
    CDUnknownBlockType _valueComparator;
    NSMutableDictionary *_displayResultsByValue;
}

@property (nonatomic, readonly) NSMutableDictionary *displayResultsByValue;
@property (nonatomic, readonly) HMCharacteristicMetadata *characteristicMetadata;
@property (nonatomic, readonly) NSSet *allValues;
@property (nonatomic, readonly) unsigned long long count;
@property (copy, nonatomic) CDUnknownBlockType valueComparator;
@property (nonatomic, readonly) NSArray *sortedValues;

+ (id)binaryValueSetWithCharacteristicMetadata:(id)arg1 firstValue:(id)arg2 firstTitle:(id)arg3 secondValue:(id)arg4 secondTitle:(id)arg5;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeValue:(id)arg1;
- (id)initWithCharacteristicMetadata:(id)arg1;
- (_Bool)addValue:(id)arg1 displayResults:(id)arg2;
- (id)displayResultsForValue:(id)arg1;
- (_Bool)addValue:(id)arg1 displayResults:(id)arg2 addOnlyIfValid:(_Bool)arg3;
- (void)removeValuesFromArray:(id)arg1;
- (void)addValuesFromArray:(id)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;
- (void)unionSet:(id)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;

@end
