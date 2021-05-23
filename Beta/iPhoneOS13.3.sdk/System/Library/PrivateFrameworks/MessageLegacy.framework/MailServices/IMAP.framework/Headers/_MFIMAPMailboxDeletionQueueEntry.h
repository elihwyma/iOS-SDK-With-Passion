/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class IMAPAccount, NSArray;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject

{
    NSArray *urls;
    NSArray *paths;
    IMAPAccount *account;
}

@property (copy) NSArray *urls;
@property (copy) NSArray *paths;
@property (retain) IMAPAccount *account;

@end
