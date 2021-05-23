/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HDWatchAppStateMonitorDelegate;

@interface HDWatchAppStateMonitor : NSObject

{
    _Bool _appIsActive;
    id <HDWatchAppStateMonitorDelegate> _delegate;
    NSString *_bundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool appIsActive;
@property (weak, nonatomic) id <HDWatchAppStateMonitorDelegate> delegate;

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1;

- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (id)initWithFirstPartyWorkoutApp;

@end
