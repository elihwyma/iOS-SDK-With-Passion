/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface UITouchData : NSObject

{
    struct CGPoint startTouchDownLocation;
    unsigned long long lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    _Bool touchIsValidTap;
    UITouch *lastTouch;
}

@end
