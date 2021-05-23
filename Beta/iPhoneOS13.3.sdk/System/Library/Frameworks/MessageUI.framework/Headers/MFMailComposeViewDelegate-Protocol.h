/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/Swift-Protocol.h>

@protocol MFMailComposeViewDelegate <Swift>

- (unsigned short)emailAddresses;
- (unsigned short)presentationViewController;
- (unsigned short)hasAttachments;
- (unsigned short)sendingEmailAddress;
- (unsigned short)setSendingEmailAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)importDocument;
- (unsigned short)markupAttachment: /* Error: Ran out of types for this method. */;
- (unsigned short)compositionContext;
- (unsigned short)compositionType;
- (unsigned short)canShowAttachmentPicker;
- (unsigned short)showPhotoPickerWithSourceType:fromSource: /* Error: Ran out of types for this method. */;
- (unsigned short)insertDrawing;
- (unsigned short)scanDocument;
- (unsigned short)changeQuoteLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)didInsertAttachment: /* Error: Ran out of types for this method. */;
- (unsigned short)insertPhotoOrVideo;
- (unsigned short)didRemoveAttachment: /* Error: Ran out of types for this method. */;
- (unsigned short)canShowFromField;
- (unsigned short)updateSignature;
- (unsigned short)sendingAccountProxy;
- (unsigned short)canShowImageSizeField;
- (unsigned short)selectCurrentEntryForFromAddressPickerView: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollToSelectedEntryInFromAddressTableView: /* Error: Ran out of types for this method. */;
- (unsigned short)sendingEmailAddressIfExists;
- (unsigned short)sendingEmailDirtied;
- (unsigned short)bccAddressesDirtied;
- (unsigned short)currentScaleImageSize;
- (unsigned short)popoverManager;
- (unsigned short)didInsertBodyText: /* Error: Ran out of types for this method. */;

@end
