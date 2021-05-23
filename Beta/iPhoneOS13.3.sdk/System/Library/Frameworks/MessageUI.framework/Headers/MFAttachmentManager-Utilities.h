/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Message/MFAttachmentManager.h>

@interface MFAttachmentManager (Utilities)

- (unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(_Bool)arg2 forContext:(id)arg3;
- (void)attachmentForCID:(id)arg1 isDisplayableImage:(CDUnknownBlockType)arg2;
- (void)attachmentForCID:(id)arg1 isBasicImage:(CDUnknownBlockType)arg2;
- (void)hasAttachmentForCID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)filenameAndURLForAttachmentForCID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
