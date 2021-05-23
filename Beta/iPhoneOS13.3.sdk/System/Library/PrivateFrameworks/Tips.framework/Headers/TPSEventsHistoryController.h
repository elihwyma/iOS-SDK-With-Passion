/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface TPSEventsHistoryController : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSDictionary *_eventIdentifierToDeliveryEventMap;
    NSMutableDictionary *_deliveryEventIdentifierToDeliveryEventMap;
}

@property (retain, nonatomic) NSMutableDictionary *deliveryEventIdentifierToDeliveryEventMap;
@property (copy, nonatomic) NSDictionary *eventIdentifierToDeliveryEventMap;

- (id)init;
- (id)debugDescription;
- (void)removeObserverIdentifiers:(id)arg1;
- (void)addEventsFromTriggerEvents:(id)arg1 desiredOutcomeEvents:(id)arg2 contentIdentifier:(id)arg3 eventSinceDate:(id)arg4;
- (id)deliveryEventsBySourceMap;
- (void)processEventProviderQueryResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateCacheData;
- (void)restartTrackingForEventIdentifiers:(id)arg1 date:(id)arg2;
- (void)removeObserverIdentifiers:(id)arg1 fromEventIdentifiers:(id)arg2;
- (id)deliveryEventsForIdentifiers:(id)arg1;
- (id)_deliveryEventForIdentifier:(id)arg1;
- (void)_setDeliveryEvent:(id)arg1 forIdentifier:(id)arg2;
- (void)_addEvents:(id)arg1 contentIdentifier:(id)arg2 eventSinceDate:(id)arg3 minObservationCount:(unsigned long long)arg4;
- (id)allDeliveryEvents;

@end
