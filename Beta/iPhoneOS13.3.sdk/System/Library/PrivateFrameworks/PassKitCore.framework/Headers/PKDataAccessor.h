/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSBundle, NSData, PKRemoteAssetManager;

@protocol OS_dispatch_queue;

@interface PKDataAccessor : NSObject

{
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (nonatomic, readonly) NSData *manifestHash;
@property (nonatomic, readonly) NSData *archiveData;
@property (nonatomic, readonly) NSData *serializedFileWrapper;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) _Bool remoteAssetsDownloaded;
@property (nonatomic, readonly) PKRemoteAssetManager *remoteAssetManager;

- (id)dictionary;
- (id)content;
- (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (_Bool)remoteAssetsDownloadedForScreenScale:(double)arg1 suffix:(id)arg2;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)dictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)resourceValueForKey:(id)arg1;
- (id)dataForBundleResource:(id)arg1;
- (id)dataForBundleResources:(id)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)displayProfileOfType:(long long)arg1;
- (void)noteShared;
- (void)updateSettings:(unsigned long long)arg1;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(_Bool)arg3;
- (void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
