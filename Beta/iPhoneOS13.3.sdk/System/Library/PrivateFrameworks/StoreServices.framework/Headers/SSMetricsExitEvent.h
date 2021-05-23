/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *exitType;
@property (retain, nonatomic) NSString *exitURL;

- (id)init;
- (id)description;
- (void)setExitTypeWithSuspendReason:(long long)arg1;

@end
