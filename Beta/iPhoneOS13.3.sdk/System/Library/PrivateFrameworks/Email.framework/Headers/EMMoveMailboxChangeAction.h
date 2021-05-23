/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMailboxChangeAction.h>

@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction

{
    EMMailboxObjectID *_parentMailboxID;
}

@property (copy, nonatomic, readonly) EMMailboxObjectID *parentMailboxID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2;
- (id)initWithMailbox:(id)arg1 newParent:(id)arg2;

@end
