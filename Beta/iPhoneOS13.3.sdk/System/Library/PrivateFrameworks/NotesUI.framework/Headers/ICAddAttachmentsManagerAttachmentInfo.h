/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICAttachment, NSAttributedString, NSData, NSDictionary, NSString, NSURL, UIImage;

@interface ICAddAttachmentsManagerAttachmentInfo : NSObject

{
    _Bool _usesTemporaryFile;
    ICAttachment *_attachment;
    NSString *_title;
    NSURL *_mediaURL;
    NSString *_mediaUTI;
    NSData *_mediaData;
    NSDictionary *_metadata;
    NSString *_mediaFilenameExtension;
    struct UIImage *_image;
    NSAttributedString *_attributedContentText;
}

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) NSString *mediaUTI;
@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSString *mediaFilenameExtension;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSAttributedString *attributedContentText;
@property (nonatomic, readonly) _Bool isPhoto;
@property (nonatomic, readonly) _Bool isVideo;
@property (nonatomic) _Bool usesTemporaryFile;

- (id)description;
- (id)initWithFileURL:(id)arg1;
- (id)attachmentIfExistsForAccount:(id)arg1;
- (unsigned long long)mediaSize;
- (void)deleteTemporaryImageFileIfNecessary;

@end
