/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <QuickLook/QLItem.h>

@class ARQuickLookPreviewItem, NSDictionary, NSString;

@protocol ARQuickLookWebKitItemDelegate;

@interface ARQuickLookWebKitItem : QLItem

{
    id <ARQuickLookWebKitItemDelegate> _delegate;
    NSDictionary *_additionalParameters;
    ARQuickLookPreviewItem *_previewItem;
}

@property (retain, nonatomic) ARQuickLookPreviewItem *previewItem;
@property (weak, nonatomic) id <ARQuickLookWebKitItemDelegate> delegate;
@property (copy, nonatomic) NSDictionary *additionalParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 previewItem:(id)arg5;
- (void)handleMessageFromCustomExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)previewOptions;
- (id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 previewItem:(id)arg4;

@end
