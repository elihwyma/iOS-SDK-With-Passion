/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAnalyticsTouchesSession : NSObject

{
    _Bool _touchesDetected;
    _Bool _multitouchDetected;
    _Bool _allowedGestureRecognizerHasBegun;
    unsigned long long _touchesStartTime;
    _Bool _valid;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;

- (id)init;
- (void)processEvent:(id)arg1;

@end
