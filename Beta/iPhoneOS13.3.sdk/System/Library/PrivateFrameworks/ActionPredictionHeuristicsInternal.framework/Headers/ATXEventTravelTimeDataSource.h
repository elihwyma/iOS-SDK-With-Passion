/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXEventTravelTimeDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;

@end
