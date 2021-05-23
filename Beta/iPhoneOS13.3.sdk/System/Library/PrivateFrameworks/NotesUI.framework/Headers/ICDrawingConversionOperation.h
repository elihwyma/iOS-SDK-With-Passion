/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperation.h>

@class ICAttachment, ICBaseTextAttachment, NSManagedObjectID;

@interface ICDrawingConversionOperation : NSOperation

{
    _Bool _isAutomatic;
    NSManagedObjectID *_attachmentID;
    NSManagedObjectID *_finalAttachmentID;
    ICBaseTextAttachment *_textAttachment;
    ICAttachment *_attachment;
}

@property (retain, nonatomic) ICAttachment *attachment;
@property (nonatomic, readonly) _Bool isAutomatic;
@property (nonatomic, readonly) NSManagedObjectID *attachmentID;
@property (nonatomic, readonly) NSManagedObjectID *finalAttachmentID;
@property (retain, nonatomic) ICBaseTextAttachment *textAttachment;

- (void)main;
- (id)initWithAttachment:(id)arg1 textAttachment:(id)arg2 automatic:(_Bool)arg3;

@end
