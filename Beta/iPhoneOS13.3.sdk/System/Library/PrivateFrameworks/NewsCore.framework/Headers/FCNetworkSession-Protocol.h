/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol FCNetworkSession <Swift>

@property (nonatomic, readonly) _Bool wifiReachable;
@property (nonatomic, readonly) long long cellularRadioAccessTechnology;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long totalSuccessCount;
@property (nonatomic, readonly) unsigned long long totalFailureCount;
@property (nonatomic, readonly) NSArray *eventGroups;

- (unsigned short)generateSessionJSONDataWithOptions:error: /* Error: Ran out of types for this method. */;

@end
