/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString;

@protocol OS_dispatch_queue;

@interface HDMigrationManager : NSObject

{
    _Bool _needsProtectedDataMigration;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool needsProtectedDataMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)daemonReady:(id)arg1;
- (void)_queue_performMigrationWithCompletion:(CDUnknownBlockType)arg1;

@end
