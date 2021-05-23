/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;

@protocol DNDSAssertionSyncManager <Swift>

@property (weak, nonatomic) id <DNDSAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id <DNDSAssertionSyncManagerDelegate> delegate;

- (unsigned short)resume;

@end
