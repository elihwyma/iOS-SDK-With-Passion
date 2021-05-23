/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStaticSyncTask.h>

@class NSURL;

@interface HDStaticSyncImportTask : HDStaticSyncTask

{
    NSURL *_importDirectoryURL;
}

+ (_Bool)_extractChangeArchive:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 progress:(id)arg4 error:(id *)arg5;
+ (id)_extractChangesFromExtractor:(id)arg1 error:(id *)arg2;
+ (_Bool)_applySyncChanges:(id)arg1 store:(id)arg2 profile:(id)arg3 progress:(id)arg4 error:(id *)arg5;

- (id)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 URL:(id)arg4;
- (void)_queue_importStaticSyncChangesFromDirectory:(id)arg1 syncStore:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
