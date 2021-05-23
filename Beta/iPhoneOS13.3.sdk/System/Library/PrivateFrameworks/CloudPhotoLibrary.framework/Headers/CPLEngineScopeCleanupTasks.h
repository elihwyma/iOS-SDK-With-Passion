/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage

{
    long long _currentCleanupScopeIndex;
    NSMutableArray *_remainingStoragesToCleanup;
    _Bool _shouldRequestACleanupToScheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)scopeTypeDescriptionForScopeType:(unsigned long long)arg1;

- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (_Bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)cleanupStepHasMore:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)hasCleanupTasks;

@end
