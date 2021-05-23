/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface InternalNetworkStateRecord : NSObject

{
    long long _stateAge;
    long long _stateDayOfWeek;
    long long _stateSlotId;
    NSString *_stateNetworkId;
    long long _stateNetworkLQM;
    long long _stateDurationSeconds;
    long long _stateSlotLength;
}

@property (readonly) long long stateAge;
@property (readonly) long long stateDayOfWeek;
@property (readonly) long long stateSlotId;
@property (readonly) NSString *stateNetworkId;
@property (readonly) long long stateNetworkLQM;
@property (readonly) long long stateDurationSeconds;
@property (readonly) long long stateSlotLength;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)_isEqualToNetworkStateRecord:(id)arg1;
- (id)initWithAge:(long long)arg1 dayOfWeek:(long long)arg2 slotId:(long long)arg3 networkId:(id)arg4 networkLQM:(long long)arg5 stateDurationSeconds:(long long)arg6 stateSlotLength:(long long)arg7;
- (void)mergeState:(id)arg1;

@end
