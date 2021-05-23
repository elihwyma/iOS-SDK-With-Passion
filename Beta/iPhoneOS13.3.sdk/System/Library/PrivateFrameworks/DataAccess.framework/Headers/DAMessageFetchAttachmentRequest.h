/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject

{
    NSString *_messageID;
    NSString *_attachmentName;
}

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *attachmentName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;

@end
