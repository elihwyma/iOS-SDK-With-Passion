/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class HFChildServiceFilter, HMService;

@interface HFChildServiceControlItem : HFControlItem

{
    HMService *_parentService;
    HFChildServiceFilter *_childServiceFilter;
}

@property (nonatomic, readonly) HMService *parentService;
@property (nonatomic, readonly) HFChildServiceFilter *childServiceFilter;

+ (Class)valueClass;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4;
- (id)normalizedValueForValue:(id)arg1;

@end
