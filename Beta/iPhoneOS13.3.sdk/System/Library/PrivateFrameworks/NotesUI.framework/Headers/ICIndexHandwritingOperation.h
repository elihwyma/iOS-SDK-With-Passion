/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperation.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface ICIndexHandwritingOperation : NSOperation

{
    NSManagedObjectID *_attachmentObjectID;
    NSManagedObjectContext *_context;
}

@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID;
@property (retain, nonatomic) NSManagedObjectContext *context;

+ (id)sharedOperationQueue;

- (void)main;
- (id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2;

@end
