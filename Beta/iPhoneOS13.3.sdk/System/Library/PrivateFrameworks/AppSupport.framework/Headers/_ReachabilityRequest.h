/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject

{
    NSLock *_lock;
    NSString *_hostname;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __CFDictionary *_observers;
    _Bool _isReachable;
    _Bool _receivedAtLeastOneCallback;
}

@property (nonatomic, readonly) NSString *hostname;

- (void)dealloc;
- (id)description;
- (_Bool)hasObservers;
- (void)removeObserver:(id)arg1;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (id)initWithHostname:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;

@end
