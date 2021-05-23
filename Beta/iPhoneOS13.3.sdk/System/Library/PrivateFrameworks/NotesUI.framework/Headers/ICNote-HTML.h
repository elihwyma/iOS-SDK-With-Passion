/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICNote.h>

@class ICCollaborationColorManager, NSArray, PKInk, TTTextStorage;

@interface ICNote (HTML)

@property (nonatomic, readonly) TTTextStorage *textStorage;
@property (nonatomic, readonly) TTTextStorage *textStorageWithoutCreating;
@property (copy, nonatomic) PKInk *selectedInk;
@property (nonatomic, readonly) long long primaryWritingDirection;
@property (nonatomic, readonly) NSArray *attachmentActivityItemsForSharing;
@property (retain, nonatomic, readonly) ICCollaborationColorManager *collaborationColorManager;
@property (nonatomic, getter=isHandwritingRecognitionEnabled) _Bool handwritingRecognitionEnabled;

+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixTextColorsInAttributedString:(id)arg1;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)isDefaultColor:(struct UIColor *)arg1;
+ (id)hexStringForColor:(struct UIColor *)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;

- (void)save;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorageWillProcessEditing:(id)arg1;
- (id)htmlString;
- (id)dataForTypeIdentifier:(id)arg1;
- (_Bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (void)noteWillTurnIntoFault;
- (void)noteDidReplaceDocument;
- (id)uiAttributedString;
- (void)willMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
- (void)didMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
- (void)noteDidSaveAndClearDecryptedData;
- (void)createMissingAttachmentsInTextStorage;
- (id)htmlStringWithAttachmentConversionHandler:(CDUnknownBlockType)arg1;
- (id)htmlStringWithAttachments:(_Bool)arg1;
- (id)htmlStringWithHTMLAttachments;
- (void)notifyTextViewsNoteWillMerge;
- (void)notifyTextViewsNoteDidMerge;
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;
- (id)attachmentActivityItemsForSharingForRange:(struct _NSRange)arg1;
- (id)attachmentFromInlineDrawingAttachment:(id)arg1;
- (id)attachmentFromTableData:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (struct UIImage *)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(_Bool)arg4 imageScaling:(unsigned long long *)arg5 showAsFileIcon:(_Bool *)arg6 isMovie:(_Bool *)arg7 movieDuration:(CDStruct_1b6d18a9 *)arg8 attachment:(id *)arg9;
- (void)saveAfterDelay;
- (void)updateModificationDateAndChangeCount;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)updateModificationDateAndChangeCountAndSaveAfterDelay;
- (void)announceAccessibilitySelectionChangedByMerge;
- (void)updatePKDrawingsWithHandwritingRecognitionEnabled:(_Bool)arg1;
- (id)noteActivityItemsForSharingWithNoteExporter:(id)arg1;
- (struct UIImage *)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(_Bool)arg4 imageScaling:(unsigned long long *)arg5 showAsFileIcon:(_Bool *)arg6 isMovie:(_Bool *)arg7 movieDuration:(CDStruct_1b6d18a9 *)arg8;
- (void)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 cache:(id)arg3 appearanceInfo:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)thumbnailImageCacheKeyWithItemSize:(struct CGSize)arg1 appearanceType:(unsigned long long)arg2;
- (void)updateModificationDateAndChangeCountAndSaveImmediately;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorageWillChange:(id)arg1;
- (void)textStorageDidChange:(id)arg1;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange)arg1;

@end
