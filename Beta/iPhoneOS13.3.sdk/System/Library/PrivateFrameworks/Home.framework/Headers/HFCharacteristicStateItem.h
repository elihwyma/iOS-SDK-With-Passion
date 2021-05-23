/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@protocol HFAggregatedCharacteristicValueSource;

@interface HFCharacteristicStateItem : HFItem <Swift>

{
    NSString *_characteristicType;
    id <HFAggregatedCharacteristicValueSource> _valueSource;
    CDUnknownBlockType _resultsProvider;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType resultsProvider;
@property (copy, nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) id <HFAggregatedCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCharacteristicType:(id)arg1 valueSource:(id)arg2 resultsProvider:(CDUnknownBlockType)arg3;

@end
