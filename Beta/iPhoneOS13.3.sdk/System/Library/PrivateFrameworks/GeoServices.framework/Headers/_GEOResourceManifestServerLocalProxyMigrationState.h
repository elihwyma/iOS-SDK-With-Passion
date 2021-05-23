/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject

{
    NSString *_loadingTileGroupUniqueIdentifier;
    NSArray *_pendingTileGroupMigrationTasks;
    id <NSObject> _transaction;
}

@property (nonatomic, readonly) NSString *loadingTileGroupUniqueIdentifier;
@property (copy, nonatomic) NSArray *pendingTileGroupMigrationTasks;

- (id)init;
- (id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2;

@end
