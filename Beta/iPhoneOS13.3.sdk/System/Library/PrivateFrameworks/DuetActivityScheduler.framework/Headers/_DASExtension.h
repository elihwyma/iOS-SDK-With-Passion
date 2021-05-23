/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, _DASActivity, _DASExtensionRemoteContext;

@protocol OS_os_log, OS_os_transaction, _DASExtensionRunner;

@interface _DASExtension : NSObject

{
    _DASExtensionRemoteContext *_context;
    id <_DASExtensionRunner> _runner;
    _DASActivity *_activity;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_log> *_log;
    NSDate *_startTime;
}

@property (retain, nonatomic) _DASExtensionRemoteContext *context;
@property (retain, nonatomic) id <_DASExtensionRunner> runner;
@property (retain, nonatomic) _DASActivity *activity;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)suspend;
- (void)_activityCompletedWithStatus:(unsigned char)arg1;
- (void)runner:(id)arg1 performActivity:(id)arg2;

@end
