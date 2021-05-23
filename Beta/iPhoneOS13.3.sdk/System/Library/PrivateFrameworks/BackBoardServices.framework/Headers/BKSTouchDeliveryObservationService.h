/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMutableIntegerMap, BSServiceConnection, NSHashTable, NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface BKSTouchDeliveryObservationService : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_touchClientQueue;
    BSServiceConnection *_connection;
    BSMutableIntegerMap *_touchIdentifierToObserverLists;
    NSMapTable *_observersToTouchIdentifiers;
    NSHashTable *_generalObservers;
}

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) BSMutableIntegerMap *touchIdentifierToObserverLists;
@property (retain, nonatomic) NSMapTable *observersToTouchIdentifiers;
@property (retain, nonatomic) NSHashTable *generalObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (oneway void)addObserver:(id)arg1;
- (oneway void)removeObserver:(id)arg1;
- (void)observeTouchEventDeliveryDidOccur:(id)arg1;
- (oneway void)addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (id)_queue_observersForTouchIdentifier:(unsigned int)arg1;
- (void)_queue_removeObserversForTouchIdentifier:(unsigned int)arg1;
- (_Bool)_queue_addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (_Bool)_queue_removeObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)_connectToTouchDeliveryService;

@end
