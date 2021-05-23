/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKAttachment, EKEventAttachmentCell, NSString;

@protocol EKEventAttachmentCellControllerDelegate;

@interface EKEventAttachmentCellController : NSObject

{
    id _downloadID;
    EKEventAttachmentCell *_cell;
    _Bool _sourceIsManaged;
    EKAttachment *_attachment;
    id <EKEventAttachmentCellControllerDelegate> _delegate;
}

@property (readonly) EKEventAttachmentCell *cell;
@property (retain, nonatomic) EKAttachment *attachment;
@property (weak, nonatomic) id <EKEventAttachmentCellControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 sourceIsManaged:(_Bool)arg3;
+ (id)_okLocalizedString;
+ (_Bool)_attachmentIsViewable:(id)arg1;
+ (id)_keyForAttachment:(id)arg1;
+ (id)_cannotOpenAttachmentLocalizedString;
+ (id)_attachmentDownloadErrorLocalizedString;

- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (void)tearDown;
- (void)cellSelected;
- (id)initWithAttachment:(id)arg1 sourceIsManaged:(_Bool)arg2;
- (void)_clearDownloadID;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (void)_openExternalAttachmentURLInBrowser:(id)arg1;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)_presentPreviewAttachmentInPreviewWithInfo:(id)arg1;
- (void)documentInteractionControllerWillEndPreview:(id)arg1;

@end
