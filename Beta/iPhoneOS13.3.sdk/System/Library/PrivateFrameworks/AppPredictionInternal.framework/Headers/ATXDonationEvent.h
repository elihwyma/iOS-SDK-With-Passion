/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXValueEstimationEvent.h>

@class NSString;

@interface ATXDonationEvent : ATXValueEstimationEvent

{
    NSString *_eventIdentifier;
}

@property (nonatomic, readonly) NSString *eventIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toKey;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventType:(id)arg3 eventIdentifier:(id)arg4 eventOwner:(id)arg5;

@end
