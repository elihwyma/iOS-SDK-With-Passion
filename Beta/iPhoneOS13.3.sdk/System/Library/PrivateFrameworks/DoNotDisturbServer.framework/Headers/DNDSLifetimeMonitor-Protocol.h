/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@class NSArray;

@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

@protocol DNDSLifetimeMonitor <Swift>

@property (copy, nonatomic, readonly) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id <DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id <DNDSLifetimeMonitorDelegate> delegate;

- (unsigned short)refreshMonitorForDate: /* Error: Ran out of types for this method. */;

@end
