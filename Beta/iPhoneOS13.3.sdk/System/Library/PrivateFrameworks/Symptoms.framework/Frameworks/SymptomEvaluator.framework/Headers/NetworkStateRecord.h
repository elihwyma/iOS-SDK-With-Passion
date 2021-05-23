/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NetworkStateRecord : NSObject

{
    long long _stateAge;
    long long _stateDayOfWeek;
    long long _stateSlotId;
    long long _stateLength;
    NSString *_stateBeginningNetworkId;
    NSString *_stateEndingNetworkId;
    long long _stateType;
    long long _stateLabelAssigned;
}

@property (readonly) long long stateAge;
@property (readonly) long long stateDayOfWeek;
@property (readonly) long long stateSlotId;
@property (readonly) long long stateLength;
@property (readonly) NSString *stateBeginningNetworkId;
@property (readonly) NSString *stateEndingNetworkId;
@property (readonly) long long stateType;
@property (readonly) long long stateLabelAssigned;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAge:(long long)arg1 dayOfWeek:(long long)arg2 slotId:(long long)arg3 stateLength:(long long)arg4 beginningNetworkId:(id)arg5 endingNetworkId:(id)arg6 stateType:(long long)arg7 label:(long long)arg8;
- (void)assignDayOfWeek:(long long)arg1;
- (void)assignLabel:(long long)arg1;

@end
