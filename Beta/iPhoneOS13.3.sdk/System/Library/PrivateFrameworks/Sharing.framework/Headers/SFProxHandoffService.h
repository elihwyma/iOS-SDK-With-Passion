/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFService;

@protocol OS_dispatch_queue;

@interface SFProxHandoffService : NSObject

{
    _Bool _activateCalled;
    CDUnknownBlockType _activateCompletion;
    _Bool _invalidateCalled;
    SFService *_service;
    int _serviceState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_activated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_serviceStart;
- (void)_completedWithError:(id)arg1;

@end
