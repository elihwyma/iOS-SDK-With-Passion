/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject

{
    NSArray *_staticProperties;
    NSArray *_liveProperties;
}

@property (retain, nonatomic) NSArray *staticProperties;
@property (retain, nonatomic) NSArray *liveProperties;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
