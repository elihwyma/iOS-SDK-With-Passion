/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController

{
    UIAlertAction *_cancelAction;
    _Bool _cancelsWhenAppEntersBackground;
}

@property (nonatomic) _Bool cancelsWhenAppEntersBackground;

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;

@end
