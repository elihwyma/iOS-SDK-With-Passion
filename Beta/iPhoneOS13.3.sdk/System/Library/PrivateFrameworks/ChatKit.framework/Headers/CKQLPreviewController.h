/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <QuickLook/QLPreviewController.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController

{
    _Bool _controllerWasDismissed;
    _Bool _suppressRefetchingCurrentHighQualityImage;
    NSArray *_previewItems;
}

@property (nonatomic) _Bool controllerWasDismissed;
@property (nonatomic) _Bool suppressRefetchingCurrentHighQualityImage;
@property (copy, nonatomic) NSArray *previewItems;

- (id)init;
- (void)setDataSource:(id)arg1;
- (void)loadView;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (id)previewActions;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)currentPreviewItem;

@end
