/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreEnvironment;

@protocol AVTAvatarManagedRecordTransformer, AVTCoreDataPersistentStoreConfiguration, AVTUILogger;

@interface AVTCoreDataChangeTracker : NSObject

{
    id <AVTCoreDataPersistentStoreConfiguration> _configuration;
    AVTCoreEnvironment *_environment;
    id <AVTUILogger> _logger;
    id <AVTAvatarManagedRecordTransformer> _recordTransformer;
}

@property (nonatomic, readonly) id <AVTCoreDataPersistentStoreConfiguration> configuration;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTAvatarManagedRecordTransformer> recordTransformer;

+ (id)tokenFileURLForLocation:(id)arg1;

- (_Bool)processChangeTransactionsWithChangeTokenLocation:(id)arg1 handler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 environment:(id)arg3;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;
- (id)currentHistoryTokenForLocation:(id)arg1;
- (id)trackerChangesFromPersistentChanges:(id)arg1 managedObjectContext:(id)arg2;
- (id)enumerateChangesAfterToken:(id)arg1 managedObjectContext:(id)arg2 changesHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)saveToken:(id)arg1 location:(id)arg2 error:(id *)arg3;
- (id)recordIdentifierForChange:(id)arg1 managedObjectContext:(id)arg2;

@end
