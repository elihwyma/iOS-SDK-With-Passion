/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject

{
    NSString *_attachmentPersistentID;
    NSString *_messagePersistentID;
    NSString *_attachmentID;
    NSString *_name;
}

@property (copy, nonatomic) NSString *attachmentPersistentID;
@property (copy, nonatomic) NSString *messagePersistentID;
@property (copy, nonatomic) NSString *attachmentID;
@property (copy, nonatomic) NSString *name;

@end
