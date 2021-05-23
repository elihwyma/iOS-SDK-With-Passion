/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMailboxChangeAction.h>

@class NSString;

@interface EMCreateMailboxChangeAction : EMMailboxChangeAction

{
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxName:(id)arg1 parentMailboxID:(id)arg2;
- (id)initWithMailboxName:(id)arg1 parentMailbox:(id)arg2;

@end
