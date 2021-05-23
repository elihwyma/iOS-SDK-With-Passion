/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _isFetchAllSubscriptionsOperation;
    NSArray *_subscriptionIDs;
}

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) _Bool isFetchAllSubscriptionsOperation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
