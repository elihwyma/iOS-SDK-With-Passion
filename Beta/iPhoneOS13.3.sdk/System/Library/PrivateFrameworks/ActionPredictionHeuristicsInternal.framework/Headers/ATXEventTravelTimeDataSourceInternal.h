/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class _PASLock;

@interface ATXEventTravelTimeDataSourceInternal : NSObject

{
    _PASLock *_hypothesizerCacheLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;

@end
