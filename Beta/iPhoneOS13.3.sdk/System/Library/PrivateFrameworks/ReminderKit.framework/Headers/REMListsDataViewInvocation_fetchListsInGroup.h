/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class REMObjectID;

@interface REMListsDataViewInvocation_fetchListsInGroup <Swift>

{
    REMObjectID *_groupObjectID;
}

@property (nonatomic, readonly) REMObjectID *groupObjectID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentGroupObjectID:(id)arg1;

@end
