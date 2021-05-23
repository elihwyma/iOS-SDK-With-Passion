/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSString;

@protocol OS_dispatch_source;

@interface MSVTaskAssertion : NSObject

{
    NSString *_uuid;
    NSString *_bundleID;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    _Bool _acquired;
    BKSProcessAssertion *_processAssertion;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)arg1;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)arg1;
- (id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)_cancelInvalidationTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateOnDate:(id)arg1;

@end
