/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider

{
    UIDocumentInteractionController *_documentInteractionController;
}

@property (weak, nonatomic, readonly) UIDocumentInteractionController *documentInteractionController;

- (id)item;
- (void)main;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2;
- (id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2;
- (id)loadedURL;

@end
