/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperation.h>

@class ICAttachmentModel, NSManagedObjectContext, NSManagedObjectID;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation

{
    NSManagedObjectID *_attachmentID;
    NSManagedObjectContext *_managedObjectContext;
    ICAttachmentModel *_attachmentModel;
}

@property (retain) NSManagedObjectID *attachmentID;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) ICAttachmentModel *attachmentModel;
@property (nonatomic, readonly) unsigned long long type;

- (void)cancel;
- (void)main;
- (id)initWithAttachmentManagedObjectID:(id)arg1;

@end
