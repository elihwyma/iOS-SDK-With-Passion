/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface SUAutoUpdatePasscodePolicy : NSObject

{
    NSHashTable *_queue_observers;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    int _stateChangedNotifyToken;
    unsigned long long _queue_currentPolicyType;
}

@property (nonatomic, readonly) unsigned long long currentPolicyType;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCurrentPolicyType:(unsigned long long)arg1;
- (_Bool)_isValidPasscodePolicyType:(unsigned long long)arg1;
- (id)stringForCurrentPolicy;

@end
