/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchPrivateKeysTaskResultObject : CATTaskResultObject

{
    NSDictionary *_identityPrivateKeySetsByKeyPairMarkers;
}

@property (copy, nonatomic) NSDictionary *identityPrivateKeySetsByKeyPairMarkers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
