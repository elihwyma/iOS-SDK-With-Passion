/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject

{
    NSDictionary *_courseIdentityInfosByGroupIdentifier;
}

@property (copy, nonatomic) NSDictionary *courseIdentityInfosByGroupIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
