/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentInlineDrawingModel.h>

@class NSObject, PKDrawing, UIImage;

@protocol OS_dispatch_queue;

@interface ICAttachmentInlineDrawingModel (UI)

@property (nonatomic, getter=isHandwritingRecognitionEnabled) _Bool handwritingRecognitionEnabled;
@property (nonatomic, readonly) PKDrawing *handwritingRecognitionDrawing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
@property (nonatomic, readonly) UIImage *imageForActivityItem;
@property (nonatomic, getter=isTitleQueryEnabled) _Bool titleQueryEnabled;

+ (struct UIImage *)generateImageForAttachment:(id)arg1 fromDrawing:(id)arg2 fullResolution:(_Bool)arg3 appearanceInfo:(id)arg4;
+ (void)generatePreviewsForAttachment:(id)arg1 fromDrawing:(id)arg2;
+ (struct UIImage *)previewImageFromDrawing:(id)arg1 fullImage:(struct CGImage *)arg2 scale:(double)arg3;
+ (unsigned short)drawingPreviewVersion;

- (id)activityItems;
- (_Bool)mergeWithDrawing:(id)arg1;
- (id)titleQuery;
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;
- (id)titleQueryDrawingDispatchQueue:(id)arg1;
- (void)setTitleQuery:(id)arg1;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (id)mergeableDataForCopying;
- (void)attachmentModelDealloc;
- (_Bool)actuallyMergeWithDrawing:(id)arg1;
- (id)activityItem;
- (id)newDrawingFromMergeableData;
- (void)setHandwritingRecognitionDrawing:(id)arg1;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (_Bool)generatePreviewsDuringCloudActivity;

@end
