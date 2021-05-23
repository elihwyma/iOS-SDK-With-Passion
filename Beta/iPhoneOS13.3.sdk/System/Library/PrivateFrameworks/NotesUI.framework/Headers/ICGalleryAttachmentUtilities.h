/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICGalleryAttachmentUtilities : NSObject

+ (struct UIImage *)imageForSubAttachment:(id)arg1 rotateForMacImageGallery:(_Bool)arg2 allowCached:(_Bool)arg3;
+ (id)createSubAttachmentFromDocument:(id)arg1 imageCache:(id)arg2 galleryAttachment:(id)arg3;
+ (struct UIImage *)imageForSubAttachment:(id)arg1 allowCached:(_Bool)arg2;
+ (double)requiredWidthForAttachment:(id)arg1 viewHeight:(double)arg2 maxWidth:(double)arg3;
+ (struct CGSize)sizeOfSubAttachment:(id)arg1 forHeight:(double)arg2;
+ (id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg1 fromDocuments:(id)arg2 imageCache:(id)arg3;
+ (struct UIImage *)imageForSubAttachment:(id)arg1;
+ (struct CGSize)sizeOfViewForAttachment:(id)arg1 textViewContentWidth:(double)arg2;

@end
