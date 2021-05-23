/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;

@interface SBSRemoteAlertHandle : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    _Bool _active;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    _Bool _valid;
    id <SBSRemoteAlertHandleClient> _handleClient;
    NSString *_handleID;
    NSHashTable *_observers;
}

@property (copy, nonatomic, readonly) NSString *handleID;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2 configurationContext:(id)arg3;
+ (id)defaultHandleClient;
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1;
+ (void)setDefaultHandleClient:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (id)handleWithConfiguration:(id)arg1;

- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)activateWithContext:(id)arg1;
- (void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(_Bool)arg2;
- (id)_initWithHandleID:(id)arg1 handleClient:(id)arg2;
- (void)activateWithOptions:(id)arg1;
- (void)_didActivate;
- (void)_didDeactivate;
- (void)_receivedInvalidationWithError:(id)arg1;

@end
