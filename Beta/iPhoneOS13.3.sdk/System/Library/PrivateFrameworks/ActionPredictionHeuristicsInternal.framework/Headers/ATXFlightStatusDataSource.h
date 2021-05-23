/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXFlightStatusDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)flightStatusForFlight:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)_flightIDIsValid:(id)arg1;

@end
