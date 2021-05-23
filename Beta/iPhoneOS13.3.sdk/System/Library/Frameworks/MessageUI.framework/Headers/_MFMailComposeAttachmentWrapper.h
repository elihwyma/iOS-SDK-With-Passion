/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface _MFMailComposeAttachmentWrapper : NSObject

{
    NSData *_data;
    NSString *_mimeType;
    NSString *_fileName;
    NSURL *_fileURL;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *identifier;

+ (id)wrapperWithFileURL:(id)arg1 mimeType:(id)arg2;
+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;

- (id)description;
- (unsigned long long)fileSize;
- (id)initWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;

@end
