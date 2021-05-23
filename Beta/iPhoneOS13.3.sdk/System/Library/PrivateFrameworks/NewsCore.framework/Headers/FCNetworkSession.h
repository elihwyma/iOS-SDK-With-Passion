/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface FCNetworkSession : NSObject

{
    NSMutableArray *_eventGroups;
    _Bool _wifiReachable;
    long long _cellularRadioAccessTechnology;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic) _Bool wifiReachable;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long totalSuccessCount;
@property (nonatomic, readonly) unsigned long long totalFailureCount;
@property (nonatomic, readonly) NSArray *eventGroups;

- (id)init;
- (void)addEventGroup:(id)arg1;
- (id)generateSessionJSONDataWithOptions:(unsigned long long)arg1 error:(id *)arg2;

@end
