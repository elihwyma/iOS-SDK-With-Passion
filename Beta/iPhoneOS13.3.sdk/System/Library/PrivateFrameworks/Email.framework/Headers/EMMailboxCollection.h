/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMCollection.h>

#import <Email/Swift-Protocol.h>

@class EMMailboxRepository;

@interface EMMailboxCollection : EMCollection <Swift>

@property (nonatomic, readonly) EMMailboxRepository *repository;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithObjectID:(id)arg1 query:(id)arg2;
- (void)setRepository:(id)arg1;
- (id)initWithMailbox:(id)arg1 repository:(id)arg2;
- (id)initWithAccount:(id)arg1 topLevelOnly:(_Bool)arg2 repository:(id)arg3;
- (id)initWithAccount:(id)arg1 topLevelOnly:(_Bool)arg2;

@end
