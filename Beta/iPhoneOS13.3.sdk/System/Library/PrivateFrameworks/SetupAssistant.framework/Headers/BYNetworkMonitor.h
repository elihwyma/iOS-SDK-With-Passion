/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSHashTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BYNetworkMonitor : NSObject

{
    struct __SCNetworkReachability *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    NSMutableDictionary *_networkTypeBlocks;
    NSObject<OS_dispatch_queue> *_networkTypeQueue;
}

+ (id)sharedInstance;
+ (void)setHoldsWiFiAssertion:(_Bool)arg1;
+ (_Bool)holdsWiFiAssertion;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(CDUnknownBlockType)arg3;
- (void)_initNetworkObservation;
- (int)currentNetworkType;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)setCurrentNetworkType:(int)arg1;

@end
