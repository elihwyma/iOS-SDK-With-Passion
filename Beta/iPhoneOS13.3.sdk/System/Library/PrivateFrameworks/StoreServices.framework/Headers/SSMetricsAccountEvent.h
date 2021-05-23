/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsAccountEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *accountEventType;

- (id)init;
- (void)setAccountEventTypeWithEventIdentifier:(long long)arg1;

@end
