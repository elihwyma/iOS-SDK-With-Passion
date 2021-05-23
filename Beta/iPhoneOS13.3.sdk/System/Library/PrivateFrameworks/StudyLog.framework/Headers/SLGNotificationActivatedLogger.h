/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@protocol SLGActivatableLogging;

@interface SLGNotificationActivatedLogger : NSObject

{
    id <SLGActivatableLogging> _logger;
    struct os_unfair_lock_s _lock;
    NSMutableSet *_activeReasons;
    NSMutableDictionary *_registrationsByReason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType activationHandler;
@property (copy, nonatomic) CDUnknownBlockType deactivationHandler;
@property (nonatomic, getter=isActive) _Bool active;

- (void)invalidate;
- (_Bool)isEnabled;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (void)_beginLoggingForReason:(id)arg1;
- (void)_endLoggingForReason:(id)arg1;
- (void)_cancelRegistrations;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 tags:(CDUnknownBlockType)arg3;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 tags:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addBeginNotification:(id)arg1 endNotification:(id)arg2;

@end
