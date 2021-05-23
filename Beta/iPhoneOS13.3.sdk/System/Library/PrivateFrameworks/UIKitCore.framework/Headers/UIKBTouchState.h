/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSUUID, UIWindow;

__attribute__((visibility("hidden")))
@interface UIKBTouchState : NSObject <Swift>

{
    double _timestamp;
    long long _phase;
    UIWindow *_window;
    double _pathMajorRadius;
    unsigned long long _pathIndex;
    NSUUID *_touchUUID;
    unsigned long long _tapCount;
    struct CGPoint _locationInWindow;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) struct CGPoint locationInWindow;
@property (nonatomic, readonly) double pathMajorRadius;
@property (nonatomic, readonly) unsigned long long pathIndex;
@property (nonatomic, readonly) NSUUID *touchUUID;
@property (nonatomic, readonly) unsigned long long tapCount;

+ (id)touchUUIDForTouch:(id)arg1;
+ (id)touchForTouchUUID:(id)arg1;
+ (id)touchesForTouchUUIDs:(id)arg1;
+ (id)touchUUIDsForTouches:(id)arg1;
+ (void)releaseUUIDForTouch:(id)arg1;
+ (id)touchStateForTouch:(id)arg1;
+ (id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(long long)arg3 location:(struct CGPoint)arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)locationInView:(id)arg1;

@end
