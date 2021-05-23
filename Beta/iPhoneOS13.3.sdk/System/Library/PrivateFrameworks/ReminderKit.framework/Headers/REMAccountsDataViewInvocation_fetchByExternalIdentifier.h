/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray;

@interface REMAccountsDataViewInvocation_fetchByExternalIdentifier <Swift>

{
    NSArray *_externalIdentifiers;
}

@property (nonatomic, readonly) NSArray *externalIdentifiers;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1;

@end
