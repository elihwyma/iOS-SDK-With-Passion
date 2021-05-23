/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMailboxChangeAction.h>

@class NSString;

@interface EMRenameMailboxChangeAction : EMMailboxChangeAction

{
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxObjectID:(id)arg1 newName:(id)arg2;
- (id)initWithMailbox:(id)arg1 newName:(id)arg2;

@end
