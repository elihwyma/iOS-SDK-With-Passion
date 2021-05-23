/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class CADisplay, FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplaySource, NSEnumerator, NSHashTable, NSMapTable, NSSet, NSString;

@protocol FBSDisplayObserving, OS_dispatch_queue;

@interface FBSDisplayMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_callOutQueue;
    CADisplay *_mainDisplay;
    FBSDisplaySource *_mainDisplaySource;
    struct os_unfair_lock_s _lock;
    id <FBSDisplayObserving> _lock_bookendObserver;
    NSHashTable *_lock_observers;
    NSMapTable *_lock_sourcesByDisplay;
    _Bool _lock_allowsUnknownDisplays;
    _Bool _lock_canPostToBookendObserver;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callOutQueue;
@property (nonatomic, readonly) _Bool canPostToBookendObserver;
@property (weak, nonatomic, readonly) id <FBSDisplayObserving> bookendObserver;
@property (copy, nonatomic, readonly) NSEnumerator *observersEnumerator;
@property (copy, nonatomic, readonly) FBSDisplayIdentity *mainIdentity;
@property (copy, nonatomic, readonly) FBSDisplayConfiguration *mainConfiguration;
@property (copy, nonatomic, readonly) NSSet *connectedIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)_initWithBookendObserver:(id)arg1;
- (void)_lock_enumerateConnectedWithBlock:(CDUnknownBlockType)arg1;
- (void)_lock_enumerateSourcesWithBlock:(CDUnknownBlockType)arg1;
- (id)_sortedSources;
- (id)initWithInitializationCompletion:(CDUnknownBlockType)arg1;
- (id)configurationForIdentity:(id)arg1;
- (_Bool)allowsUnknownDisplays;
- (void)setAllowsUnknownDisplays:(_Bool)arg1;
- (void)_postInitialBookendObserverConnections;

@end
