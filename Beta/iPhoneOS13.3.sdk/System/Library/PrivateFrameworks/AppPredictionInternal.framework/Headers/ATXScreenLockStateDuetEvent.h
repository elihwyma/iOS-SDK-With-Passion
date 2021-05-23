/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@interface ATXScreenLockStateDuetEvent : ATXDuetEvent

{
    long long _screenLockState;
}

@property (nonatomic, readonly) long long screenLockState;

- (id)description;
- (id)identifier;
- (id)initWithScreenLockState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;

@end
