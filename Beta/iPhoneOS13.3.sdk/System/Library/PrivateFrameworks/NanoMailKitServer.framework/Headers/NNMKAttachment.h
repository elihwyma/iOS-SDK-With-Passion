/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <UIKit/NSTextAttachment.h>

@class NSString;

@interface NNMKAttachment : NSTextAttachment

{
    NSString *_url;
    NSString *_contentId;
    NSString *_fileName;
    NSString *_mimePartNumber;
    unsigned long long _fileSize;
    unsigned long long _type;
    NSString *_messageId;
    unsigned long long _syncState;
}

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimePartNumber;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) unsigned long long syncState;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
