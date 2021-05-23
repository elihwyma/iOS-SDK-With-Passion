/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIAlertController.h>

@interface UIAlertController (PhotosUICore)

@property (nonatomic) _Bool px_shouldForceAlertStyle;

+ (void)px_showDebugAlertInKeyWindowWithMessage:(id)arg1;
+ (id)px_alertControllerWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)px_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(_Bool)arg2 includesVideos:(_Bool)arg3 actionHandler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5;
+ (id)px_alertForCPLEnableError:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
+ (id)px_alertForStorageUpgradeLoadFailure;

@end
