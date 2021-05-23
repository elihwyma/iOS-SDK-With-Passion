/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MFAttachmentRaw : NSObject

{
    NSData *_data;
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_contentID;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *contentID;

+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (id)attachmentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;

@end
