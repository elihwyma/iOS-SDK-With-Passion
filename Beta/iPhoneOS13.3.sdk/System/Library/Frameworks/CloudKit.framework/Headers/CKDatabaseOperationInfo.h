/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@interface CKDatabaseOperationInfo : CKOperationInfo

{
    long long _databaseScope;
}

@property (nonatomic) long long databaseScope;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)activityCreate;
- (void)takeValuesFrom:(id)arg1;

@end
