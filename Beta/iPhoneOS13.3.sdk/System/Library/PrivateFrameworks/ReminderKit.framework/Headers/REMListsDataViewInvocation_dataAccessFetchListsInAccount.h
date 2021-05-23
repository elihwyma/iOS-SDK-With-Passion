/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchListsInAccount <Swift>

{
    REMObjectID *_accountObjectID;
}

@property (nonatomic, readonly) REMObjectID *accountObjectID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentAccountObjectID:(id)arg1;

@end
