/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class CalDateRange, NSDate, NSDictionary;

@protocol OS_dispatch_queue;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject

{
    CalDateRange *_cachedDateRange;
    CalDateRange *_cachedCentralYear;
    NSDictionary *_cachedFirstsOfMonths;
    NSDictionary *_cachedFirstsOfYears;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentGeneration;
    NSDate *_currentRequest;
    _Bool _loadPending;
    CDUnknownBlockType _significantDatesChangedHandler;
}

@property (copy, nonatomic) CDUnknownBlockType significantDatesChangedHandler;

- (id)init;
- (void)dealloc;
- (void)_load;
- (id)firstOfOverlayMonthsForCalendarMonth:(id)arg1;
- (id)firstOfOverlayYearsForCalendarMonth:(id)arg1;
- (void)_invalidateCaches;
- (void)_requestDate:(id)arg1;

@end
