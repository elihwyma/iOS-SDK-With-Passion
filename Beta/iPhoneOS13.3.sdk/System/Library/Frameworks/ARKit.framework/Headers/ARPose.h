/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARPose : NSObject

{
    double _timestamp;
    CDStruct_14d5dc5e _transform;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) CDStruct_14d5dc5e transform;

- (id)description;
- (id)initWithTimestamp:(double)arg1 transform:(CDStruct_14d5dc5e)arg2;

@end
