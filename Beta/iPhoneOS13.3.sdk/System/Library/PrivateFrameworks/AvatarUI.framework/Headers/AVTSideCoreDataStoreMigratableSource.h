/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreEnvironment, NSString;

@protocol AVTCoreDataPersistentStoreLocalConfiguration;

@interface AVTSideCoreDataStoreMigratableSource : NSObject

{
    id <AVTCoreDataPersistentStoreLocalConfiguration> _configuration;
    AVTCoreEnvironment *_environment;
}

@property (nonatomic, readonly) id <AVTCoreDataPersistentStoreLocalConfiguration> configuration;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)migrationNeeded;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;
- (id)createSourceBackend;
- (_Bool)finalizeMigration:(id *)arg1;
- (id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3;

@end
