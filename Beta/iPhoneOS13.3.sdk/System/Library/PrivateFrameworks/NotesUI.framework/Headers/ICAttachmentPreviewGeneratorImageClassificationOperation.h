/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICAttachmentPreviewGeneratorOperation.h>

@class ICAttachmentModel, NSManagedObjectContext;

@interface ICAttachmentPreviewGeneratorImageClassificationOperation : ICAttachmentPreviewGeneratorOperation

{
    NSManagedObjectContext *_managedObjectContext;
    ICAttachmentModel *_attachmentModel;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) ICAttachmentModel *attachmentModel;

- (unsigned long long)type;
- (void)main;

@end
