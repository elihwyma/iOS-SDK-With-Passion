/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@interface CNUIIDSRequest : NSObject

+ (_Bool)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(struct NSDictionary *)arg2;
+ (id)IDSServiceForService:(long long)arg1;
+ (id)validHandlesFromHandles:(id)arg1;
+ (id)errorRefreshingHandles:(id)arg1 forService:(id)arg2;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3;
+ (_Bool)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(struct NSDictionary *)arg1;
+ (id)afterDelayRetryRefreshingStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 scheduler:(id)arg4;
+ (id)resultsForIDSControllerResult:(struct NSDictionary *)arg1 handlesByDestination:(id)arg2;
+ (_Bool)isStatusOfEveryDestinationUnknown:(struct NSDictionary *)arg1;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 delay:(double)arg4 scheduler:(id)arg5;
+ (id)IDSResponseQueue;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;

@end
