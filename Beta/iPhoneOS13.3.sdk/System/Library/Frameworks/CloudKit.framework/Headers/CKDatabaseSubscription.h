/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKSubscription.h>

@class NSString;

@interface CKDatabaseSubscription : CKSubscription

@property (copy, nonatomic) NSString *recordType;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubscriptionID:(id)arg1;

@end
