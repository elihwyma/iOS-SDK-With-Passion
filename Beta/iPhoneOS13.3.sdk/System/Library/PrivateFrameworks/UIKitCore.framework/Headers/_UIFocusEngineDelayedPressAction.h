/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIFocusEventRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineDelayedPressAction : NSObject

{
    _UIFocusEventRecognizer *_sender;
    long long _pressType;
    double _timestamp;
}

@property (weak, nonatomic, readonly) _UIFocusEventRecognizer *sender;
@property (nonatomic, readonly) long long pressType;
@property (nonatomic, readonly) double timestamp;

+ (void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;

- (id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;
- (void)_sendPressEvent;

@end
