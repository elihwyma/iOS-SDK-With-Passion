/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMAttitude : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double yaw;
@property (nonatomic, readonly) CDStruct_afa449f9 rotationMatrix;
@property (nonatomic, readonly) CDStruct_bf7dff04 quaternion;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)multiplyByInverseOfAttitude:(id)arg1;
- (void)setQuaternion:(CDStruct_bf7dff04)arg1;
- (id)initWithQuaternion:(CDStruct_bf7dff04)arg1;

@end
