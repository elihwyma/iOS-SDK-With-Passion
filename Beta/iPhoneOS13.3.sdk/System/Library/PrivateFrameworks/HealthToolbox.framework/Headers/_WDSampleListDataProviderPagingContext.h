/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKQuery, NSDate;

__attribute__((visibility("hidden")))
@interface _WDSampleListDataProviderPagingContext : NSObject

{
    _Bool _requiresPaging;
    _Bool _fetchingData;
    NSDate *_earliestProcessedSampleDate;
    HKQuery *_currentQuery;
    NSDate *_fetchUntilDate;
}

@property (nonatomic) _Bool requiresPaging;
@property (nonatomic, getter=isFetchingData) _Bool fetchingData;
@property (retain, nonatomic) NSDate *earliestProcessedSampleDate;
@property (retain, nonatomic) HKQuery *currentQuery;
@property (retain, nonatomic) NSDate *fetchUntilDate;

@end
