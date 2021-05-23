/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineIDMapping : CPLEngineStorage

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (unsigned long long)scopeType;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1;
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;
- (_Bool)hasPendingIdentifiers;
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;

@end
