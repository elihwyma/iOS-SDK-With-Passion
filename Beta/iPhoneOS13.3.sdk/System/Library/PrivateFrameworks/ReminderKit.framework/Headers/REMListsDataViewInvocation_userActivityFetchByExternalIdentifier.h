/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSString, REMObjectID;

@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier <Swift>

{
    NSString *_externalIdentifier;
    REMObjectID *_accountObjectID;
}

@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) REMObjectID *accountObjectID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 accountObjectID:(id)arg2;

@end
