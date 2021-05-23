/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIPrintActivity.h>

@class NSString, QLPreviewController, UICreatePDFActivityItem;

@interface UICreatePDFActivity : UIPrintActivity

{
    QLPreviewController *_previewController;
    UICreatePDFActivityItem *_previewURLItem;
}

@property (retain, nonatomic) QLPreviewController *previewController;
@property (retain, nonatomic) UICreatePDFActivityItem *previewURLItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void)_cleanup;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)_systemImageName;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)performActivity;
- (id)_embeddedActivityViewController;
- (void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(_Bool)arg3;
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;
- (_Bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;

@end
