/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol EDSearchableIndexAttachmentItemMetadatumBuilder <Swift>

@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *dateSent;

@end
