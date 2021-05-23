/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXHolidaysDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_holidayCalendarForEventStore:(id)arg1;

@end
