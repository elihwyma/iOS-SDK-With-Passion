/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange, NSURL;

@interface EMMessageTransferAction : EMMessageChangeAction

{
    _Bool _copyMessages;
    NSURL *_destinationMailboxURL;
    long long _specialDestinationMailboxType;
    ECMessageFlagChange *_flagChange;
}

@property (nonatomic, readonly) NSURL *destinationMailboxURL;
@property (nonatomic, readonly) long long specialDestinationMailboxType;
@property (nonatomic, readonly) ECMessageFlagChange *flagChange;
@property (nonatomic, readonly) _Bool copyMessages;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)arg1 specialDestinationMailboxType:(long long)arg2 flagChange:(id)arg3 copyMessages:(_Bool)arg4;
- (id)initWithMessageListItems:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(_Bool)arg3;

@end
