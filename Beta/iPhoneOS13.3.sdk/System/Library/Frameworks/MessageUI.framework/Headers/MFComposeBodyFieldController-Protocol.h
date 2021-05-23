/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/Swift-Protocol.h>

@protocol MFComposeBodyFieldController <Swift>

- (unsigned short)setReplacementFilenamesByContentID: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceImagesIfNecessary;
- (unsigned short)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes: /* Error: Ran out of types for this method. */;
- (unsigned short)prependPreamble:quote:layoutDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)addMarkupString:quote:emptyFirst:prepended:composeType:attachmentInfoByURL: /* Error: Ran out of types for this method. */;
- (unsigned short)appendOrReplace:withMarkupString:quote:composeType:attachmentInfoByURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setFileName:forImageWithContentID: /* Error: Ran out of types for this method. */;
- (unsigned short)insertAttachmentAsImage:isSinglePagePDF:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)countDuplicatedAttachments:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceFilenamePlaceholderWithImage:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceFilenamePlaceholderWithAttachment:identifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeMediaAttachment:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)displayAttachmentWithIdentifierAsSinglePagePDF:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)forceNextSelectionFromSecondToFirstLine;
- (unsigned short)containsRichText: /* Error: Ran out of types for this method. */;
- (unsigned short)plainTextContentUsingAttachmentInfoByIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)htmlStringUsingAttachmentInfoByIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)htmlStringsAttachmentURLsAndPlainTextAlternativeRemovingSignature:attachmentInfoByIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)placeCaretAtStartOfBody;
- (unsigned short)setDirty:completionHandler: /* Error: Ran out of types for this method. */;

@end
