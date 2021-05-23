/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage

@property (nonatomic, readonly) unsigned long long countOfOriginalImages;
@property (nonatomic, readonly) unsigned long long countOfOriginalVideos;
@property (nonatomic, readonly) unsigned long long countOfOriginalOthers;
@property (nonatomic, readonly) unsigned long long sizeOfResourcesToUpload;
@property (nonatomic, readonly) unsigned long long sizeOfOriginalResourcesToUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (_Bool)openWithError:(id *)arg1;
- (unsigned long long)scopeType;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 shouldCheckResources:(_Bool)arg3 error:(id *)arg4;
- (_Bool)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id *)arg2;
- (id)resourceTypesToUploadForUploadIdentifier:(id)arg1;
- (unsigned long long)availableResourceSizeForUploadIdentifier:(id)arg1;
- (_Bool)shouldUploadResource:(id)arg1;

@end
