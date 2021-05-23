/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache, MURemoteViewController, MarkupViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface DCMarkupPresenter : NSObject

{
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
    MURemoteViewController *_markupRemoteViewController;
    MarkupViewController *_markupViewController;
    UIViewController *_presentingViewController;
    unsigned long long _inkStyle;
    CDUnknownBlockType _frameBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _startPresentBlock;
    CDUnknownBlockType _dismissCompletionBlock;
}

@property (retain) ICDocCamDocumentInfo *documentInfo;
@property (retain) ICDocCamImageCache *imageCache;
@property (retain, nonatomic) MURemoteViewController *markupRemoteViewController;
@property (retain, nonatomic) MarkupViewController *markupViewController;
@property (weak) UIViewController *presentingViewController;
@property (nonatomic) unsigned long long inkStyle;
@property (copy, nonatomic) CDUnknownBlockType frameBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType startPresentBlock;
@property (copy, nonatomic) CDUnknownBlockType dismissCompletionBlock;

+ (void)markupDocumentInfo:(id)arg1 imageCache:(id)arg2 fromView:(id)arg3 presentingViewController:(id)arg4 inkStyle:(unsigned long long)arg5 frameBlock:(CDUnknownBlockType)arg6 startPresentBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 dismissCompletionBlock:(CDUnknownBlockType)arg9;
+ (void)cleanupMarkup;

- (void)presentMarkupFromView:(id)arg1;
- (void)presentMarkupViewControllerFromView:(id)arg1;
- (void)dismissMarkupViewController;
- (void)markupDoneAction:(id)arg1;
- (void)markupCancelAction:(id)arg1;
- (void)handleReturnedURL:(id)arg1;

@end
