/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKStateMachineState, NSString;

@interface HKStateMachineTransition : NSObject

{
    long long _event;
    NSString *_label;
    HKStateMachineState *_fromState;
    HKStateMachineState *_toState;
}

@property (nonatomic, readonly) long long event;
@property (copy, nonatomic, readonly) NSString *label;
@property (weak, nonatomic, readonly) HKStateMachineState *fromState;
@property (weak, nonatomic, readonly) HKStateMachineState *toState;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithEvent:(long long)arg1 label:(id)arg2 from:(id)arg3 to:(id)arg4;

@end
