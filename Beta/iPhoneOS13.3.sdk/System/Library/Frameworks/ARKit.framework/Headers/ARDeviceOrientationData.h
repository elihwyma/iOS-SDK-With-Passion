/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class CMDeviceMotion, NSString;

@interface ARDeviceOrientationData : NSObject

{
    CMDeviceMotion *_deviceMotion;
    double _timestamp;
    CDStruct_2d7b3170 _rotationMatrix;
}

@property (retain, nonatomic) CMDeviceMotion *deviceMotion;
@property (nonatomic) double timestamp;
@property (nonatomic) CDStruct_2d7b3170 rotationMatrix;
@property (nonatomic, readonly) CDStruct_14d5dc5e rotationMatrixENU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)arg1;

@end
