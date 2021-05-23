/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSArray;

@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSArray *impressionIdentifiers;

- (id)init;
- (id)description;

@end
