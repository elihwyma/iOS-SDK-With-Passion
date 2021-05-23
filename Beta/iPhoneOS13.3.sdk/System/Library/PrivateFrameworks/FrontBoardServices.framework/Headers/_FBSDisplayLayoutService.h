/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpoint, FBSDisplayLayout, NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface _FBSDisplayLayoutService : NSObject

{
    BSServiceConnectionEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BSServiceConnection *_connection;
    struct os_unfair_lock_s _lock;
    NSMapTable *_lock_keyedObservers;
    FBSDisplayLayout *_lock_layout;
    unsigned long long _lock_layoutGeneration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)endpoint;
- (id)currentLayout;
- (oneway void)updateLayout:(id)arg1 withTransition:(id)arg2;
- (id)_initWithEndpoint:(id)arg1 qos:(BOOL)arg2;
- (void)addObserver:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)removeObserverForKey:(id)arg1;

@end
