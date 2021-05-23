/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSAtomicSignal, BSServiceConnectionListener, FBSDisplayConfiguration, FBSDisplayLayout, NSHashTable, NSMutableOrderedSet, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface FBSDisplayLayoutPublisher : NSObject

{
    BSAtomicSignal *_invalidatedSignal;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_queuesByQOS[3];
    NSObject<OS_xpc_object> *_queues_xLayoutByQOS[3];
    NSMutableSet *_queues_connectionsByQOS[3];
    FBSDisplayLayout *_mutableLayout;
    NSMutableSet *_mutableElementKeys;
    NSHashTable *_observers;
    NSObject<OS_xpc_object> *_xLayout;
    FBSDisplayLayout *_currentLayout;
    NSMutableOrderedSet *_transitionReasons;
    unsigned long long _transitionsCount;
    _Bool _dirty;
}

@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)publisherWithConfiguration:(id)arg1;

- (id)init;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)flush;
- (id)_initWithConfiguration:(id)arg1;
- (id)addElement:(id)arg1;
- (void)activate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)_addElement:(id)arg1 forKey:(id)arg2;
- (id)transitionAssertionWithReason:(id)arg1;

@end
