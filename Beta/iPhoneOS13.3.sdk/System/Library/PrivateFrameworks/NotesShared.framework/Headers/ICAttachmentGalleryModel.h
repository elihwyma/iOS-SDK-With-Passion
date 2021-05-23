/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@class CROrderedSet, ICCRDTIdentifierOrderedSetVersionedDocument;

@interface ICAttachmentGalleryModel : ICAttachmentModel

{
    ICCRDTIdentifierOrderedSetVersionedDocument *_attachmentIdentifiersOrderedSetDocument;
}

@property (retain, nonatomic) ICCRDTIdentifierOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;
@property (nonatomic, readonly) CROrderedSet *attachmentIdentifiersOrderedSet;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (_Bool)hasThumbnailImage;
- (_Bool)hasPreviews;
- (_Bool)showThumbnailInNoteList;
- (_Bool)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (id)additionalIndexableTextContentInNote;
- (id)firstSubAttachment;
- (unsigned long long)subAttachmentsCount;
- (id)singleSubAttachmentAtIndex:(unsigned long long)arg1;
- (void)insertSubAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)subAttachmentIdentifiers;
- (_Bool)attachmentHasMergeableData;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(_Bool)arg1;
- (id)searchableTextContent;
- (id)searchableStringArray;
- (void)enumerateSubAttachmentsWithBlock:(CDUnknownBlockType)arg1;
- (long long)previewImageOrientation;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(_Bool)arg1;
- (void)attachmentDidRefresh:(_Bool)arg1;
- (_Bool)canSaveURL;
- (_Bool)canSaveURLWithOtherAttachments;
- (id)previewImageTypeUTI;
- (id)titleForSubAttachment:(id)arg1;
- (_Bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (void)addSubAttachment:(id)arg1;
- (void)removeSubAttachment:(id)arg1;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)arg1;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (void)writeMergeableData;
- (short)sectionForSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)undeleteSubAttachments;

@end
