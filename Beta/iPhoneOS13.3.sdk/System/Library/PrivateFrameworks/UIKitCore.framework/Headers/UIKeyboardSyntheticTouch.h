/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject

{
    double timestamp;
    long long phase;
    unsigned long long tapCount;
    UIWindow *window;
    struct CGPoint locationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
}

@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long tapCount;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) struct CGPoint locationInWindow;
@property (nonatomic, readonly) unsigned char _pathIndex;
@property (nonatomic, readonly) unsigned char _pathIdentity;
@property (nonatomic) float _pathMajorRadius;

+ (id)syntheticTouchWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;

- (void)dealloc;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;
- (struct CGPoint)getLocationInWindow;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(_Bool)arg2;

@end
