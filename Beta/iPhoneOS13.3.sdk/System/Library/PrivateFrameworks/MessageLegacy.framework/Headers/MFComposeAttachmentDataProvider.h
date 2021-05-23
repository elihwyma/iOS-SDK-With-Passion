/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSString;

@interface MFComposeAttachmentDataProvider : NSObject

{
    NSMutableDictionary *_attachmentsData;
    NSCache *_attachmentsPlaceholderData;
    NSMutableDictionary *_attachmentsPasteboardData;
    NSMutableDictionary *_attachmentsUndoData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)rawDataForContentID:(id)arg1;
- (id)messageForAttachment:(id)arg1;
- (void)addData:(id)arg1 forContentID:(id)arg2;
- (id)initWithData:(id)arg1 forContentID:(id)arg2;
- (void)removeDataForAttachment:(id)arg1;
- (void)recordPasteboardDataForAttachments:(id)arg1;
- (void)recordUndoDataForAttachments:(id)arg1;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)dataForContentID:(id)arg1;
- (id)_dataForAttachment:(id)arg1;

@end
