/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEvent : NSObject

{
    double _timestamp;
}

@property (nonatomic, readonly) double timestamp;

- (id)initWithTimestamp:(double)arg1;
- (id)copyWithTimestamp:(double)arg1;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end
