/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSRecursiveLock;

@interface IMIDStatusController : NSObject

{
    NSRecursiveLock *_servicesLock;
    NSMutableSet *_servicesRegistered;
}

@property (retain, nonatomic) NSMutableSet *_servicesRegistered;
@property (retain, nonatomic) NSRecursiveLock *_servicesLock;

+ (id)sharedInstance;

- (id)init;
- (long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(_Bool)arg3;
- (long long)_idStatusForID:(id)arg1 onService:(id)arg2;
- (void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3;
- (void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3;
- (long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2;
- (long long)_idStatusForID:(id)arg1 onAccount:(id)arg2;
- (void)requestStatusForID:(id)arg1 onService:(id)arg2;
- (void)requestStatusForID:(id)arg1 onAccount:(id)arg2;
- (long long)statusForID:(id)arg1 onService:(id)arg2;

@end
