/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSSet;

@interface CRKFetchLastLoginDateRequest : CATTaskRequest

{
    NSSet *_appleIDs;
}

@property (copy, nonatomic) NSSet *appleIDs;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
