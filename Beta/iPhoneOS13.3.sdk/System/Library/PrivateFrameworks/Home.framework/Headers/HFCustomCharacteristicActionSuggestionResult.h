/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMCharacteristic, NSSet;

@interface HFCustomCharacteristicActionSuggestionResult : NSObject

{
    _Bool _isMutuallyExclusiveAction;
    HMCharacteristic *_characteristic;
    id _targetValue;
    NSSet *_matchingExistingActions;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) id targetValue;
@property (copy, nonatomic, readonly) NSSet *matchingExistingActions;
@property (nonatomic) _Bool isMutuallyExclusiveAction;

- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 matchingActions:(id)arg3;

@end
