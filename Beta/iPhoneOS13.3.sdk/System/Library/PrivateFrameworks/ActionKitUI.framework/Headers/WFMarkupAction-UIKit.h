/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFMarkupAction.h>

@class NSArray, NSMapTable, NSString;

@interface WFMarkupAction (UIKit)

@property (retain, nonatomic) NSArray *previewItems;
@property (retain, nonatomic) NSMapTable *editedFileURLsByPreviewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;
- (id)editedItems;
- (void)finishRunningWithError:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)showMarkupWithItems:(id)arg1 userInterface:(id)arg2;
- (void)getPreviewItemsWithInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
