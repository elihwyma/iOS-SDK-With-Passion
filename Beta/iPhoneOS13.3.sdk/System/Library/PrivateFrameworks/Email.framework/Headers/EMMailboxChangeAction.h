/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <Swift>

{
    EMMailboxObjectID *_mailboxObjectID;
}

@property (copy, nonatomic, readonly) EMMailboxObjectID *mailboxObjectID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailboxObjectID:(id)arg1;

@end
