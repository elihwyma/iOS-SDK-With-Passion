/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKProcessAssertion : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _expirationBlock;
    unsigned long long _identifier;
    BKSProcessAssertion *_bkProcessAssertion;
    id _expirationObserver;
}

@property (readonly) unsigned long long identifier;
@property (retain) BKSProcessAssertion *bkProcessAssertion;
@property (retain) id expirationObserver;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_expireBackgroundTask;
- (void)_onQueueSetBkProcessAssertion:(id)arg1;
- (id)initWithExpirationBlock:(CDUnknownBlockType)arg1 debugDescription:(id)arg2;

@end
