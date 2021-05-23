/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface CPLEngineDerivativesCache : NSObject

{
    NSURL *_cacheMappingURL;
    _Bool _tryCreatingCacheFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_cacheURL;
    Class _derivativeGeneratorClass;
}

@property (copy, nonatomic, readonly) NSURL *cacheURL;
@property (retain, nonatomic) Class derivativeGeneratorClass;

- (id)initWithCacheURL:(id)arg1;
- (void)discardCache;
- (id)_cacheKeyForReferenceResource:(id)arg1 adjustments:(id)arg2;
- (id)_folderNameForReferenceResource:(id)arg1 adjustment:(id)arg2;
- (void)_createCacheFolderIfNecessary;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2;
- (id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2;
- (void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2 adjustment:(id)arg3;
- (id)cachedResourcesForReferenceResource:(id)arg1 adjustment:(id)arg2;
- (_Bool)_isUnsupportedFormatError:(id)arg1;
- (void)_updateChange:(id *)arg1 fromOldChange:(id)arg2 withResources:(id)arg3 includeThumbnail:(_Bool)arg4;
- (_Bool)_checkResource:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (_Bool)_checkGeneratedResources:(id)arg1 error:(id *)arg2;
- (void)generateDerivativesForChange:(id)arg1 derivativesFilter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
