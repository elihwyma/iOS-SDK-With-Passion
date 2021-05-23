/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSSet;

@interface CRKIdentityServiceRemovePrivateKeysTaskRequest : CATTaskRequest

{
    NSSet *_keyPairMarkers;
}

@property (copy, nonatomic) NSSet *keyPairMarkers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
