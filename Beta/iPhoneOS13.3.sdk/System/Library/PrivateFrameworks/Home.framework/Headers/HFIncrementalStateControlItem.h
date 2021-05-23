/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

#import <Home/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol HFPrimaryStateWriter;

@interface HFIncrementalStateControlItem : HFControlItem <Swift>

{
    HFControlItem<HFPrimaryStateWriter> *_primaryStateControlItem;
    NSString *_incrementalCharacteristicType;
}

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (copy, nonatomic, readonly) NSString *incrementalCharacteristicType;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)valueClass;
+ (id)optionsForPrimaryStateControlItem:(id)arg1 incrementalCharacteristicType:(id)arg2;
+ (id)readOnlyCharacteristicTypes;

- (id)updateWithOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)writeValue:(id)arg1;
- (id)toggleValue;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3;
- (id)togglePrimaryAndIncrementalState;

@end
