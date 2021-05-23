/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@interface _TVRUITouch : NSObject

{
    double _timestamp;
    long long _phase;
    long long _fingerIndex;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) long long fingerIndex;

- (id)initWithTimestamp:(double)arg1 touchPhase:(long long)arg2 fingerIndex:(long long)arg3;

@end
