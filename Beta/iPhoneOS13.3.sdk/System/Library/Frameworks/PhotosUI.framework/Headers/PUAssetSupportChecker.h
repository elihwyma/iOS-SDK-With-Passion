/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUAssetSupportChecker : NSObject

+ (void)_alertTitleAndMessageForAsset:(id)arg1 type:(long long)arg2 title:(id *)arg3 message:(id *)arg4;
+ (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 knowledgeBaseURL:(id)arg3 alertControllerPresenter:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)checkIsSupportedAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 uti:(id)arg3 codecName:(id)arg4 alertControllerPresenter:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)presentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)checkIsSupportedAndPresentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
