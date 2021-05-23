/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject

{
    REMXPCDaemonController *_daemonController;
}

@property (retain, nonatomic) REMXPCDaemonController *daemonController;

- (id)init;
- (id)initWithDaemonController:(id)arg1;
- (id)_debugPerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)_getBoolForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (void)_setBoolValue:(_Bool)arg1 forBehaviorKey:(id)arg2;
- (void)_crashDaemonWithMessage:(id)arg1;
- (long long)_getIntegerForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (long long)changeTrackingBehaviors;
- (void)_setIntegerValue:(long long)arg1 forBehaviorKey:(id)arg2;
- (id)fetchStatusReportsWithError:(id *)arg1;
- (_Bool)isDataAccessEnabled;
- (void)enableDataAccess;
- (void)disableDataAccess;
- (_Bool)isBabySitterEnabled;
- (void)enableBabySitter;
- (void)disableBabySitter;
- (void)applyChangeTrackingBehavior:(long long)arg1;
- (void)unapplyChangeTrackingBehavior:(long long)arg1;

@end
