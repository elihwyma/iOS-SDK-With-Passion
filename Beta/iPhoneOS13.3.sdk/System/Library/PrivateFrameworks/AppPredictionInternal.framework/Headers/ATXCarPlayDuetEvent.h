/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@interface ATXCarPlayDuetEvent : ATXDuetEvent

{
    long long _carPlayState;
}

@property (nonatomic, readonly) long long carPlayState;

- (id)description;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCarPlayConnectedState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
