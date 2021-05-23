/*
 Image: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
 */

#import <Foundation/NSObject.h>

@class CUMessageSession, NSData, NSString, TSgPTPClock;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface TVLTimeSync : NSObject

{
    unsigned int _IPv4;
    NSData *_IPv6;
    TSgPTPClock *_clock;
    NSString *_networkInterfaceName;
    NSObject<OS_dispatch_group> *_waitForPTPLock;
    CUMessageSession *_session;
}

@property (nonatomic) unsigned int IPv4;
@property (copy, nonatomic) NSData *IPv6;
@property (retain, nonatomic) TSgPTPClock *clock;
@property (copy, nonatomic) NSString *networkInterfaceName;
@property (retain) NSObject<OS_dispatch_group> *waitForPTPLock;
@property (retain, nonatomic) CUMessageSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)invalidate;
+ (void)timeSyncWithRemoteIPv6:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)timeSyncWithRemoteIPv4:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)invalidate;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (id)initWithRemoteIPv6:(id)arg1;
- (void)_startPTPWithIPv6:(_Bool)arg1 session:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRemoteIPv4:(id)arg1;
- (void)negotiateGrandmasterIdentityAttempt:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_clearWaitForPTPClockDispatchGroup;
- (unsigned long long)convertToHostTimeFromDomainTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long *)arg2;
- (unsigned long long)convertToDomainTimeFromHostTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long *)arg2;

@end
