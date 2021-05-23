/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo

{
    unsigned long long _badgeValue;
}

@property (nonatomic) unsigned long long badgeValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
