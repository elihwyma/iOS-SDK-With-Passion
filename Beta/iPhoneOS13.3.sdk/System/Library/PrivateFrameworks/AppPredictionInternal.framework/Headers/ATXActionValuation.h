/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXActionValuation : NSObject

- (id)getCurrentLocation;
- (_Bool)shouldPredictSendMessageIntent:(id)arg1;
- (_Bool)shouldPredictRequestRideIntent:(id)arg1;
- (_Bool)shouldPredictIntent:(id)arg1;
- (void)scoreAndFilterActions:(id)arg1 actionStatistics:(id)arg2 scoreLogger:(id)arg3;

@end
