/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@interface SignpostReaderHelper : NSObject

- (id)getSignpostSummaryWithWhitelist:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (id)customGetNearestMidnight;
- (id)processSignpostWithConfig:(id)arg1 withServiceType:(int)arg2;
- (id)getAllSignpostData:(id)arg1 endDate:(id)arg2;
- (id)generateSignpostSubmissionWithTagConfig:(id)arg1 withWhitelist:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;

@end
