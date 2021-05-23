/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKNotifyRegistration;

@interface PKNotifySubregistration : NSObject

{
    struct os_unfair_lock_s _lock;
    PKNotifyRegistration *_parent;
    CDUnknownBlockType _handler;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidateFromParent:(_Bool)arg1;
- (id)initWithParent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)invokeHandler;

@end
