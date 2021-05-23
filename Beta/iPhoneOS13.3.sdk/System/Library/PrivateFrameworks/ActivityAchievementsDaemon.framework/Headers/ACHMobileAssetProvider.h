/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class _HKMobileAssetDownloadManager;

@interface ACHMobileAssetProvider : NSObject

{
    _HKMobileAssetDownloadManager *_mobileAssetDownloadManager;
}

@property (retain, nonatomic) _HKMobileAssetDownloadManager *mobileAssetDownloadManager;

- (id)init;
- (id)initWithMobileAssetDownloadManager:(id)arg1;
- (void)_fetchAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_compatibilityVersionQueryParameters;
- (void)_removeAssets:(id)arg1;
- (void)_downloadAssets:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_processAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_assetsGroupedByUniqueNameAndType:(id)arg1;
- (void)_getCurrentAsssetAndOlderAssetsFromAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableAssetsWithCompletion:(CDUnknownBlockType)arg1;

@end
