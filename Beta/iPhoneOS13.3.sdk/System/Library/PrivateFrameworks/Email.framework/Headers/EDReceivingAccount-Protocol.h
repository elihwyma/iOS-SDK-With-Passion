/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class NSArray, NSString;

@protocol EDReceivingAccount <Swift>

@property (nonatomic, readonly) _Bool isManaged;
@property (nonatomic, readonly) _Bool sourceIsManaged;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (copy, nonatomic, readonly) NSString *smtpIdentifier;
@property (nonatomic, readonly) _Bool isLocalAccount;
@property (nonatomic, readonly) _Bool shouldArchiveByDefault;

- (unsigned short)deliveryAccount;
- (unsigned short)setDeliveryAccount: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxForType: /* Error: Ran out of types for this method. */;
- (unsigned short)containsMailboxWithURL: /* Error: Ran out of types for this method. */;

@end
