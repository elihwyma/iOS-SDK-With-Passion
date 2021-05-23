/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFControlItem.h>

@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem

{
    NSString *_characteristicType;
}

@property (copy, nonatomic, readonly) NSString *characteristicType;

+ (Class)valueClass;
+ (id)defaultMainTextColorForCharacteristicType:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (_Bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)resultsForBatchReadResponse:(id)arg1;
- (void)getStatus:(out id *)arg1 mainTextColor:(out id *)arg2 supplementaryDescription:(out id *)arg3 withBatchReadResponse:(id)arg4;

@end
