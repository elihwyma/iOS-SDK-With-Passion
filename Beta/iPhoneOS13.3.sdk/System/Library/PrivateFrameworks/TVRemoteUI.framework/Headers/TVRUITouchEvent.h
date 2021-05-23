/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@interface TVRUITouchEvent : NSObject

{
    double _timestamp;
    long long _touchPhase;
    long long _fingerIndex;
    struct CGPoint _digitizerLocation;
}

@property (nonatomic, readonly) struct CGPoint digitizerLocation;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long touchPhase;
@property (nonatomic, readonly) long long fingerIndex;

- (id)initWithTimestamp:(double)arg1 touchPhase:(long long)arg2 fingerIndex:(long long)arg3 digitizerLocation:(struct CGPoint)arg4;

@end
