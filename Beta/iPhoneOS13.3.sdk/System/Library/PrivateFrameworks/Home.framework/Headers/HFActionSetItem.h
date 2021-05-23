/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMActionSet, NSString;

@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFActionSetItem : HFItem <Swift>

{
    HMActionSet *_actionSet;
    unsigned long long _actionSetItemStyle;
    id <HFCharacteristicValueSource> _valueSource;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

+ (id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3 fastInitialUpdate:(_Bool)arg4;
+ (_Bool)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 forMinimumValue:(id)arg3 maximumValue:(id)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)rooms;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_mostCommonRoomForActionSet:(id)arg1;
- (id)actionSetOperation:(id)arg1 errorFromError:(id)arg2;
- (id)executeActionSet;
- (id)turnOffActionSet;

@end
