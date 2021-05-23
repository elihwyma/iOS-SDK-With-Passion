/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFAttachmentLibraryDataProvider.h>

@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider

+ (id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)arg1 withMessage:(id)arg2;
+ (id)fullResolutionAttachmentURLForAttachmentURL:(id)arg1;
+ (id)fullResolutionAttachmentForAttachment:(id)arg1;

- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
