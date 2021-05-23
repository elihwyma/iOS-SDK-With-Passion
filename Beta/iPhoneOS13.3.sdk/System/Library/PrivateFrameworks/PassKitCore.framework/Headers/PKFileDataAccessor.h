/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDataAccessor.h>

@class NSLock, NSObject, NSURL, PKRemoteAssetManager;

@protocol OS_dispatch_queue;

@interface PKFileDataAccessor : PKDataAccessor

{
    NSLock *_remoteAssetManagerLock;
    _Bool _remoteAssetManagerAccessed;
    PKRemoteAssetManager *_remoteAssetManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) NSURL *fileURL;

- (id)init;
- (id)dictionary;
- (id)bundle;
- (id)content;
- (id)archiveData;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2 processingQueue:(id)arg3;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (_Bool)remoteAssetsDownloadedForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)remoteAssetManager;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)resourceValueForKey:(id)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResources:(id)arg1;
- (id)manifestHash;
- (id)serializedFileWrapper;
- (_Bool)remoteAssetsDownloaded;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)displayProfileOfType:(long long)arg1;

@end
