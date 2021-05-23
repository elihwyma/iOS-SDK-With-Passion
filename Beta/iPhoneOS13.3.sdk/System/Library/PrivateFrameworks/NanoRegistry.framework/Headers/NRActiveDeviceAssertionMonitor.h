/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertionMonitor : NSObject

{
    int _assertionToken;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) int assertionToken;
@property (nonatomic, readonly) _Bool hasActiveAssertion;

+ (id)sharedInstance;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)startObservingToken;
- (void)stopObservingToken;
- (void)notifyObserversWithTokenValue:(int)arg1;

@end
