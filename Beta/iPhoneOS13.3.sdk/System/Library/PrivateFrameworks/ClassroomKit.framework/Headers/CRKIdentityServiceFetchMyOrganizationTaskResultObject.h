/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSUUID;

@interface CRKIdentityServiceFetchMyOrganizationTaskResultObject : CATTaskResultObject

{
    NSUUID *_organizationID;
}

@property (retain, nonatomic) NSUUID *organizationID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
