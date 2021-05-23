/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice, PPEventStore;

@interface ATXExtraordinaryEventsDataSource : NSObject

{
    ATXHeuristicDevice *_device;
    PPEventStore *_extraordinaryEventStore;
}

+ (id)_endOfDayAfterDate:(id)arg1 numberOfDays:(long long)arg2;

- (id)initWithDevice:(id)arg1;
- (id)_ekEventForHighlight:(id)arg1 eventStore:(id)arg2;
- (id)_fetchExtraordinaryEvents;
- (void)getEventsWithProminentFeature:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
