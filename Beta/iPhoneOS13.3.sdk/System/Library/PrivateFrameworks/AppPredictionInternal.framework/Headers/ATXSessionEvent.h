/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXValueEstimationEvent.h>

@class ATXLazyOperator, NSMutableArray;

@interface ATXSessionEvent : ATXValueEstimationEvent

{
    _Bool _processed;
    NSMutableArray *_donations;
    ATXLazyOperator *_duration;
    NSMutableArray *_unprocessedDonations;
}

@property (nonatomic, readonly) NSMutableArray *donations;
@property (nonatomic, readonly) _Bool processed;
@property (retain, nonatomic) ATXLazyOperator *duration;
@property (retain, nonatomic) NSMutableArray *unprocessedDonations;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventOwner:(id)arg3;
- (void)addDonation:(id)arg1;

@end
