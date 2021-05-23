/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDNanoSyncStoreDelegate <Swift>

@property (nonatomic, readonly) _Bool isMaster;

- (unsigned short)nanoSyncStore:remoteSystemBuildVersionDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)nanoSyncStore:restoreStateDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)nanoSyncStore:deviceNameDidChange: /* Error: Ran out of types for this method. */;

@end
