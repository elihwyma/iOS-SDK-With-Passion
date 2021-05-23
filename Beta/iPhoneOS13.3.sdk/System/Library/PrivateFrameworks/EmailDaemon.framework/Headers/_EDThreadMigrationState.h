/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EMThreadScope, NSMutableSet;

@interface _EDThreadMigrationState : NSObject

{
    EMThreadScope *_threadScope;
    NSMutableSet *_objectIDsToMigrate;
    NSMutableSet *_recentlyMigratedObjectIDs;
    unsigned long long _state;
}

@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) NSMutableSet *objectIDsToMigrate;
@property (nonatomic, readonly) NSMutableSet *recentlyMigratedObjectIDs;
@property (nonatomic) unsigned long long state;

- (void)fail;
- (id)initWithThreadScope:(id)arg1;
- (id)nextBatch;
- (_Bool)removeMigratedObjectIDs:(id)arg1;
- (_Bool)addObjectIDs:(id)arg1;
- (_Bool)changeObjectIDsToMigrate:(id)arg1;
- (id)deleteObjectIDsToMigrate:(id)arg1;

@end
