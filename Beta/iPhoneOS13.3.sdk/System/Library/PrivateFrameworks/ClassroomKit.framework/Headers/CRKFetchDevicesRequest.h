/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSArray;

@interface CRKFetchDevicesRequest : CATTaskRequest

{
    NSArray *_deviceIdentifiers;
}

@property (copy, nonatomic) NSArray *deviceIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
