/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NoteObject *note;

+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id *)arg2;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id *)arg2;
+ (_Bool)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id *)arg2;
+ (_Bool)applyFileAttributesForAttachment:(id)arg1 error:(id *)arg2;
+ (_Bool)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id *)arg2;

- (void)prepareForDeletion;
- (_Bool)persistAttachmentData:(id)arg1 error:(id *)arg2;
- (id)attachmentDataFileURLWithError:(id *)arg1;
- (id)attachmentDataWithError:(id *)arg1;

@end
