/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageChangeAction.h>

@class NSArray;

@interface EMMessageDeleteAllAction : EMMessageChangeAction

{
    NSArray *_mailboxObjectIDs;
}

@property (copy, nonatomic, readonly) NSArray *mailboxObjectIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2;

@end
