/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXCloudPhotoWelcomeViewController.h>

@class NSString;

@interface PUCloudPhotoWelcomeViewController : PXCloudPhotoWelcomeViewController

{
    CDUnknownBlockType __completionHandler;
}

@property (copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)resetLastPresentationInfo;

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDefaultTitle;

@end
