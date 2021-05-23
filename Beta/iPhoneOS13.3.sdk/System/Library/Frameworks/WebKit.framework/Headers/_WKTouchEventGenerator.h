/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _WKTouchEventGenerator : NSObject

{
    struct __IOHIDEventSystemClient *_ioSystemClient;
    struct {
        int identifier;
        struct CGPoint point;
        double pathMajorRadius;
        double pathPressure;
        unsigned char pathProximity;
    } _activePoints[5];
    unsigned long long _activePointCount;
    NSMutableDictionary *_eventCallbacks;
}

@property (retain, nonatomic) NSMutableDictionary *eventCallbacks;

+ (long long)nextEventCallbackID;
+ (id)sharedTouchEventGenerator;

- (id)init;
- (void)dealloc;
- (void)touchDown:(struct CGPoint)arg1;
- (struct __IOHIDEvent *)_createIOHIDEventType:(int)arg1;
- (_Bool)_sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned long long)arg2;
- (_Bool)_sendMarkerHIDEventWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)liftUp:(struct CGPoint)arg1;
- (void)touchDown:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)liftUp:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)moveToPoint:(struct CGPoint)arg1 duration:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)receivedHIDEvent:(struct __IOHIDEvent *)arg1;

@end
