/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchRestrictionsResultObject : CATTaskResultObject

{
    NSDictionary *_valuesByRestriction;
}

@property (copy, nonatomic) NSDictionary *valuesByRestriction;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
