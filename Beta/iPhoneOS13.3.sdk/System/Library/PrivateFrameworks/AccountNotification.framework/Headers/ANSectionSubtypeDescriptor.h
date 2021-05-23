/*
 Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ANSectionSubtypeDescriptor : NSObject

{
    _Bool _allowsAddingToLockScreenWhenUnlocked;
    NSString *_accountTypeID;
    long long _subtype;
    NSString *_fullUnlockActionLabel;
}

@property (nonatomic, readonly) NSString *accountTypeID;
@property (nonatomic) long long subtype;
@property (nonatomic) _Bool allowsAddingToLockScreenWhenUnlocked;
@property (copy, nonatomic) NSString *fullUnlockActionLabel;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForAccountWithType:(id)arg1;

@end
