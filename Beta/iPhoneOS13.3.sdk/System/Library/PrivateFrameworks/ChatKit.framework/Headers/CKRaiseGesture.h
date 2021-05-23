/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CMGestureManager;

@interface CKRaiseGesture : NSObject

{
    int proximityToken;
    _Bool _enabled;
    _Bool _proximityState;
    long long _gestureState;
    id _target;
    SEL _action;
    CMGestureManager *_gestureManager;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) CMGestureManager *gestureManager;
@property (nonatomic) long long gestureState;
@property (nonatomic) _Bool proximityState;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isRecognized) _Bool recognized;

+ (_Bool)isRaiseGestureSupported;
+ (_Bool)isRaiseGestureEnabled;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setProximityMonitoringEnabled:(_Bool)arg1;
- (void)proximityStateDidChange:(id)arg1;

@end
