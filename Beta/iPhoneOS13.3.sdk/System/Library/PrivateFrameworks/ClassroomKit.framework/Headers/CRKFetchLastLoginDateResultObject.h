/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject

{
    NSDictionary *_lastLoginDatesByAppleID;
}

@property (copy, nonatomic) NSDictionary *lastLoginDatesByAppleID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatesByAppleID:(id)arg1;

@end
