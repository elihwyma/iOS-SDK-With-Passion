/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject

{
    NSArray *_connectedDevices;
}

@property (copy, nonatomic) NSArray *connectedDevices;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
