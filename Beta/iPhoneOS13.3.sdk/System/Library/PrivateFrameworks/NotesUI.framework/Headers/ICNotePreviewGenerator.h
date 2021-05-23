/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface ICNotePreviewGenerator : NSObject

{
    _Bool _suspended;
    NSOperationQueue *_operationQueue;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic, getter=isSuspended) _Bool suspended;

+ (id)sharedGenerator;

- (id)init;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)previewURLForNote:(id)arg1;
- (struct UIImage *)renderPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6;
- (id)drawingAttachmentAtStartOfNote:(id)arg1;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (struct UIImage *)previewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (void)previewImageWithDrawingAttachment:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end
