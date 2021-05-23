/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@interface TVRCTouchEvent : NSObject

{
    double _timestamp;
    long long _finger;
    long long _phase;
    struct CGPoint _digitizerLocation;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long finger;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) struct CGPoint digitizerLocation;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithTimestamp:(double)arg1 finger:(long long)arg2 phase:(long long)arg3 digitizerLocation:(struct CGPoint)arg4;

@end
