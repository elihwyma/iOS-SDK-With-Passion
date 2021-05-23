/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction

{
    ECMessageFlagChange *_flagChange;
}

@property (nonatomic, readonly) ECMessageFlagChange *flagChange;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2;

@end
