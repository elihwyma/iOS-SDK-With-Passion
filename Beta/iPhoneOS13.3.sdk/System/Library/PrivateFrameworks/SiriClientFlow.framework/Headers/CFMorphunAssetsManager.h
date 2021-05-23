/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CFMorphunAssetsManager : NSObject

{
    NSObject<OS_dispatch_queue> *queue;
}

+ (id)sharedMorphunAssetsManager;

- (id)init;
- (void)cancelDownload:(id)arg1;
- (void)downloadAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)triggerMorphunAssetsManagement;
- (void)downloadAssetsForAssetType:(id)arg1 forLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)replaceLanguageCodeFormat:(id)arg1;
- (id)downloadedLocalAsset:(id)arg1 forLanguage:(id)arg2 error:(id *)arg3;
- (void)downloadAssets:(id)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2;
- (id)morphunAssetsPathForLanguage:(id)arg1;
- (void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerPath:(id)arg1 withLanguage:(id)arg2;

@end
