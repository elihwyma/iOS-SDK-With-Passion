/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (MFAttachmentsPasteboardSupport)

- (void)mf_addPasteboardRepresentationsForAttachments:(id)arg1;
- (id)mf_getAttachmentsPasteboardRepresentations;

@end
