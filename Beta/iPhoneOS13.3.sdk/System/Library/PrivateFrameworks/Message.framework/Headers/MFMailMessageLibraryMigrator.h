/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSMutableArray, NSString;

@protocol MFMailMessageLibraryMigratorDelegate, OS_dispatch_queue;

@interface MFMailMessageLibraryMigrator : NSObject

{
    _Bool _needsSpotlightReindex;
    _Bool _needsRebuildTriggers;
    _Bool _needsRebuildMessageInfoIndex;
    NSMutableArray *_postMigrationBlocks;
    id <MFMailMessageLibraryMigratorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSConditionLock *_migrationState;
}

@property (weak, nonatomic, readonly) id <MFMailMessageLibraryMigratorDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (nonatomic, readonly) NSConditionLock *migrationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (int)currentVersion;

- (id)initWithDelegate:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (long long)_runMigrationStepsFromVersion:(int)arg1 connection:(id)arg2 schema:(id)arg3;
- (long long)attachProtectedDatabaseWithConnection:(id)arg1;
- (void)detachProtectedDatabaseWithConnection:(id)arg1;
- (void)addPostMigrationBlock:(CDUnknownBlockType)arg1;
- (void)noteNeedsSpotlightReindex;
- (void)noteRebuildMessageInfoIndex;
- (void)noteNeedsRebuildTriggers;
- (void)resetTTRPromptAndForceReindex;
- (_Bool)_checkForeignKeysWithConnection:(id)arg1;
- (_Bool)needsRebuildTriggers;
- (_Bool)needsRebuildMessageInfoIndex;
- (void)runPostMigrationBlocksWithConnection:(id)arg1;
- (_Bool)needsSpotlightReindex;
- (long long)_checkContentProtectionState;
- (_Bool)migrateWithDatabaseConnection:(id)arg1 schema:(id)arg2;

@end
