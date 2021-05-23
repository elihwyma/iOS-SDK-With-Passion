/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@class ICTable, ICTableVersionedDocument;

@interface ICAttachmentTableModel : ICAttachmentModel

{
    ICTableVersionedDocument *_tableDocument;
}

@property (retain, nonatomic) ICTableVersionedDocument *tableDocument;
@property (nonatomic, readonly) ICTable *table;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)tableFromAttributedString:(id)arg1 managedObjectContext:(id)arg2;

- (id)localizedFallbackTitle;
- (id)searchableTextContentInNote;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentWillRefresh:(_Bool)arg1;
- (void)attachmentDidRefresh:(_Bool)arg1;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (void)writeMergeableData;
- (_Bool)providesTextContentInNote;
- (id)textContentInNote;
- (void)noteWillAddOrRemovePassword;
- (void)regenerateTextContentInNote;
- (void)attachmentAwakeFromFetch;
- (void)willMarkAttachmentForDeletion;
- (_Bool)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (void)mergeTablePrimitiveData;
- (id)stringsAtRow:(unsigned long long)arg1;
- (void)updateAttachmentByMergingWithTableData:(id)arg1;

@end
