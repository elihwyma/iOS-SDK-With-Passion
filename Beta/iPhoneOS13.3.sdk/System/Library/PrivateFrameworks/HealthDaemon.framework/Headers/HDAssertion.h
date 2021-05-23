/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, NSString, NSUUID;

@protocol OS_dispatch_source;

@interface HDAssertion : NSObject

{
    HDAssertionManager *_manager;
    long long _state;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    double _expirationDate;
    struct os_unfair_lock_s _lock;
    NSUUID *_UUID;
    NSString *_assertionIdentifier;
    NSString *_ownerIdentifier;
    double _timeout;
}

@property (readonly) long long rawState;
@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSString *assertionIdentifier;
@property (copy, nonatomic, readonly) NSString *ownerIdentifier;
@property (readonly) long long state;
@property (nonatomic) double timeout;
@property (readonly) double remainingTime;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2;
- (void)_invalidateAndRelease:(_Bool)arg1;
- (void)_invalidationTimerDidFire;
- (long long)_takeWithManager:(id)arg1;

@end
