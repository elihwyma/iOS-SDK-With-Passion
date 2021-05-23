/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@interface TVRCGameControllerEvent : NSObject

{
    _Bool _down;
    double _timestamp;
    struct CGPoint _joystickLocation;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly, getter=isDown) _Bool down;
@property (nonatomic, readonly) struct CGPoint joystickLocation;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithTimestamp:(double)arg1 isDown:(_Bool)arg2 joystickLocation:(struct CGPoint)arg3;

@end
