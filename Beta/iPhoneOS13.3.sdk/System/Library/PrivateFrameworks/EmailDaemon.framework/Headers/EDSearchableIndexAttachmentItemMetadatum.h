/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface EDSearchableIndexAttachmentItemMetadatum : NSObject

{
    NSURL *_attachmentFileURL;
    NSString *_domainIdentifier;
    NSString *_accountIdentifier;
    NSArray *_mailboxIdentifiers;
    NSString *_senderAddress;
    NSArray *_recipientAddresses;
    NSDate *_dateReceived;
    NSDate *_dateSent;
}

@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *dateSent;
@property (nonatomic, readonly) NSURL *attachmentFileURL;
@property (nonatomic, readonly) _Bool canReadAttachmentFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAttachmentFileURL:(id)arg1 builder:(CDUnknownBlockType)arg2;

@end
