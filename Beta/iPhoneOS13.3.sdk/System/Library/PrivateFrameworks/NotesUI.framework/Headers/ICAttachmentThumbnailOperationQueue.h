/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperationQueue.h>

@interface ICAttachmentThumbnailOperationQueue : NSOperationQueue

- (void)addOperationWithAttachment:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 fallbackBlock:(CDUnknownBlockType)arg9;
- (id)checkPreviewImagesIntegrityOperationForAttachment:(id)arg1;

@end
