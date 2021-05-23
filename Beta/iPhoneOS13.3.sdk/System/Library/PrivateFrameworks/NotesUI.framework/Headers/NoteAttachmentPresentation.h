/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSNumber, NSString, NSURL;

@interface NoteAttachmentPresentation : NSObject

{
    _Bool _sourceIsManaged;
    _Bool _image;
    NSString *_contentID;
    NSURL *_contentIDURL;
    NSURL *_dataFileURL;
    NSString *_mimeType;
    NSString *_filename;
    NSError *_dataFileURLError;
    NSString *_contentIDURLAbsoluteString;
    NSData *_data;
    struct CGSize _iconSize;
}

@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSURL *dataFileURL;
@property (copy, nonatomic) NSURL *contentIDURL;
@property (retain, nonatomic) NSError *dataFileURLError;
@property (copy, nonatomic) NSString *contentIDURLAbsoluteString;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic, getter=isImage) _Bool image;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) struct CGSize iconSize;
@property (nonatomic, readonly) NSNumber *dataSizeNumber;
@property (copy, nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) _Bool sourceIsManaged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)attachmentPresentationsForAttachments:(id)arg1;
+ (void)prepareDocumentForPresentationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 occurences:(id *)arg3;
+ (id)presentationSelector;
+ (void)prepareDocumentForSerializationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 newPresentationProvider:(CDUnknownBlockType)arg3 leftoverPresentations:(id *)arg4;

- (void)clearCache;
- (_Bool)getData:(id *)arg1 mimeType:(id *)arg2 error:(id *)arg3;
- (_Bool)getPresentationData:(id *)arg1 mimeType:(id *)arg2 error:(id *)arg3;
- (id)initWithNoteAttachmentObject:(id)arg1;
- (void)updateContentIDURL;
- (id)initWithData:(id)arg1 contentID:(id)arg2 mimeType:(id)arg3 filename:(id)arg4;

@end
