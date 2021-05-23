/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/Swift-Protocol.h>

@protocol HMFSystemInfoMigrationDataSourceDelegate;

@protocol HMFSystemInfoMigrationDataSource <Swift>

@property (weak) id <HMFSystemInfoMigrationDataSourceDelegate> delegate;
@property (nonatomic, readonly, getter=isMigrating) _Bool migrating;

@end
