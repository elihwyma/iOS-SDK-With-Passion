/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, REMReminderChangeItem;

@interface REMReminderAttachmentContextChangeItem : NSObject

{
    REMReminderChangeItem *_reminderChangeItem;
    NSMutableArray *_mutableAttachments;
}

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (retain, nonatomic) NSMutableArray *mutableAttachments;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *fileAttachments;
@property (nonatomic, readonly) NSArray *imageAttachments;
@property (nonatomic, readonly) NSArray *urlAttachments;

- (void)removeAllAttachments;
- (void)addAttachment:(id)arg1;
- (id)initWithReminderChangeItem:(id)arg1;
- (id)attachmentsOfClass:(Class)arg1;
- (void)insertAttachment:(id)arg1 afterAttachment:(id)arg2;
- (void)removeURLAttachments;
- (id)addURLAttachmentWithURL:(id)arg1;
- (void)removeAllAttachmentsWithClass:(Class)arg1;
- (id)addFileAttachmentWithURL:(id)arg1 error:(id *)arg2;
- (id)addFileAttachmentWithData:(id)arg1 uti:(id)arg2;
- (id)addImageAttachmentWithURL:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id *)arg4;
- (id)addImageAttachmentWithData:(id)arg1 uti:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)setURLAttachmentWithURL:(id)arg1;
- (void)insertAttachment:(id)arg1 beforeAttachment:(id)arg2;
- (void)removeAttachment:(id)arg1;

@end
