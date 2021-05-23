/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel

{
    ICDrawingVersionedDocument *_drawingDocument;
    _Bool _observingAttachment;
}

@property (nonatomic) _Bool observingAttachment;
@property (nonatomic, readonly) ICDrawing *drawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)sharedDrawingController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithAttachment:(id)arg1;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)saveURL;
- (_Bool)hasPreviews;
- (_Bool)previewsSupportMultipleAppearances;
- (_Bool)preferLocalPreviewImages;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (_Bool)showThumbnailInNoteList;
- (long long)previewImageOrientation;
- (_Bool)canSaveURL;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (void)writeMergeableData;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (id)previewImageURL;
- (void)attachmentIsDeallocating:(id)arg1;
- (_Bool)supportsQuickLook;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)arg1;
- (id)drawingDocument;
- (void)drawingPreviewIsUpToDate;

@end
