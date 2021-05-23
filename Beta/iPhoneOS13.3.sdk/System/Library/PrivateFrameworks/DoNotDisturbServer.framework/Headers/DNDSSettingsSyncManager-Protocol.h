/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@protocol DNDSSettingsSyncManager <Swift>

@property (weak, nonatomic) id <DNDSSettingsSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id <DNDSSettingsSyncManagerDelegate> delegate;

- (unsigned short)resume;
- (unsigned short)update;

@end
