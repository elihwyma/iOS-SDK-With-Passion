/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SLGLogging;

@interface SLGActivatableLogger : NSObject

{
    id <SLGLogging> _logger;
    struct os_unfair_lock_s _lock;
    _Bool _active;
    CDUnknownBlockType _activationHandler;
    CDUnknownBlockType _deactivationHandler;
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
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 tags:(CDUnknownBlockType)arg3;
- (void)logBlock:(CDUnknownBlockType)arg1 domain:(id)arg2 tags:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
