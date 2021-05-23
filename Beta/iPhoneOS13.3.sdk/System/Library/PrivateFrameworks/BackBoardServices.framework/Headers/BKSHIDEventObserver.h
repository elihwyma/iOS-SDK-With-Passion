/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSMapTable, NSSet;

@protocol OS_dispatch_queue;

@interface BKSHIDEventObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s _lock;
    NSMapTable *_lock_deferringAssertionsToObservers;
    NSSet *_lock_deferringResolutions;
    BSServiceConnection *_connection;
}

@property (nonatomic, readonly) NSSet *deferringResolutions;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)addDeferringObserver:(id)arg1;
- (void)_lock_enableObservation;
- (void)_lock_disableObservation;
- (void)didUpdateDeferringResolutions:(id)arg1;

@end
