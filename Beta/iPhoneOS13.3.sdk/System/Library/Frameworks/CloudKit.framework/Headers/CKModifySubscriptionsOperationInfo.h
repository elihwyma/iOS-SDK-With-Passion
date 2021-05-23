/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_subscriptionsToSave;
    NSArray *_subscriptionIDsToDelete;
}

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
