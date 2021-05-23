/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentTableModel.h>

@interface ICAttachmentTableModel (UI)

- (id)htmlString;
- (id)activityItems;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (struct CGSize)previewInAvailableSize:(struct CGSize)arg1 shouldDraw:(_Bool)arg2;
- (id)quicklookPreviewItems;

@end
