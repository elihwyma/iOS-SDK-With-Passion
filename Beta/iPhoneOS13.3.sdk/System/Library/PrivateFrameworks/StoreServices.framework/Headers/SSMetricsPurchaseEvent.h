/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSString *transactionIdentifier;

- (id)init;
- (void)addFieldsFromPurchaseResponse:(id)arg1;

@end
