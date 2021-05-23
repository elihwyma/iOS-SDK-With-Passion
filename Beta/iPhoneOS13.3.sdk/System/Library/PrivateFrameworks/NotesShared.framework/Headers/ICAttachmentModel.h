/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICAttachment, NSString, NSURL;

@interface ICAttachmentModel : NSObject

{
    _Bool _previewGenerationOperationCancelled;
    _Bool _mergeableDataDirty;
    ICAttachment *_attachment;
}

@property _Bool previewGenerationOperationCancelled;
@property (weak, nonatomic, readonly) ICAttachment *attachment;
@property (nonatomic, readonly) struct CGSize intrinsicContentSize;
@property (nonatomic, getter=isMergeableDataDirty) _Bool mergeableDataDirty;
@property (nonatomic, readonly) _Bool hasPreviews;
@property (nonatomic, readonly) _Bool previewsSupportMultipleAppearances;
@property (nonatomic, readonly) _Bool preferLocalPreviewImages;
@property (nonatomic, readonly) _Bool needsFullSizePreview;
@property (nonatomic, readonly) _Bool requiresPostProcessing;
@property (nonatomic, readonly) _Bool supportsOCR;
@property (nonatomic, readonly) _Bool supportsImageClassification;
@property (nonatomic, readonly) NSString *previewImageTypeUTI;
@property (nonatomic, readonly) NSString *hardLinkVersion;
@property (nonatomic, readonly) _Bool hasThumbnailImage;
@property (nonatomic, readonly) _Bool showThumbnailInNoteList;
@property (nonatomic, readonly) _Bool canMarkup;
@property (nonatomic, readonly) _Bool supportsQuickLook;
@property (nonatomic, readonly) NSURL *saveURL;
@property (nonatomic, readonly) _Bool canSaveURL;
@property (nonatomic, readonly) _Bool canSaveURLWithOtherAttachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (void)deletePreviewItemHardLinkURLs;

- (void)dealloc;
- (id)initWithAttachment:(id)arg1;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (id)localizedFallbackTitle;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (_Bool)shouldShowInContentInfoText;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (_Bool)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (id)additionalIndexableTextContentInNote;
- (id)searchableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(_Bool)arg1;
- (id)searchableTextContent;
- (long long)previewImageOrientation;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(_Bool)arg1;
- (void)attachmentDidRefresh:(_Bool)arg1;
- (id)titleForSubAttachment:(id)arg1;
- (_Bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (void)writeMergeableData;
- (short)sectionForSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)undeleteSubAttachments;
- (_Bool)providesTextContentInNote;
- (id)textContentInNote;
- (id)attachmentModelType;
- (void)noteWillAddOrRemovePassword;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)updateFileBasedAttributes;
- (id)mergeableDataForCopying;
- (void)addLocation;
- (id)searchableTextContentForLocation;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (id)hardLinkFolderURL;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1 withFileName:(id)arg2;
- (void)regenerateTextContentInNote;
- (void)attachmentAwakeFromFetch;
- (void)attachmentIsDeallocating:(id)arg1;
- (void)updateAttachmentSize;
- (_Bool)shouldCropImage;
- (void)deleteSubAttachments;
- (void)willMarkAttachmentForDeletion;
- (_Bool)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (id)generateTemporaryURLWithExtension:(id)arg1;
- (id)dataForQuickLook;

@end
