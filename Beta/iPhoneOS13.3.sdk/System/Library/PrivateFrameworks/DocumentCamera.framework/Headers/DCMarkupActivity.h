/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIActivity.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface DCMarkupActivity : UIActivity

{
    unsigned long long _inkStyle;
    UIView *_fromView;
    UIViewController *_presentingViewController;
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
    CDUnknownBlockType _frameBlock;
    CDUnknownBlockType _completionBlock;
}

@property (weak, nonatomic) UIView *fromView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) ICDocCamDocumentInfo *documentInfo;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (copy, nonatomic) CDUnknownBlockType frameBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) unsigned long long inkStyle;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
