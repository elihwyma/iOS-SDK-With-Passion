/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageTransferAction.h>

@class NSArray;

@interface EMMessageTransferAllAction : EMMessageTransferAction

{
    NSArray *_mailboxObjectIDs;
}

@property (copy, nonatomic, readonly) NSArray *mailboxObjectIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 destinationMailbox:(id)arg3 copyMessages:(_Bool)arg4;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 specialDestinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(_Bool)arg5;

@end
