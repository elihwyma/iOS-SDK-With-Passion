/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier <Swift>

{
    NSArray *_externalIdentifiers;
    REMObjectID *_accountObjectID;
}

@property (nonatomic, readonly) NSArray *externalIdentifiers;
@property (nonatomic, readonly) REMObjectID *accountObjectID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1 accountObjectID:(id)arg2;

@end
