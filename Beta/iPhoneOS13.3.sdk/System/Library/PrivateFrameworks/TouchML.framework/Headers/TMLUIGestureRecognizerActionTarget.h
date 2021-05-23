/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLUIGestureRecognizerActionTarget : NSObject

{
    NSString *_signalName;
    long long _state;
}

- (void)handleGesture:(id)arg1;
- (id)initWithSignal:(id)arg1 state:(long long)arg2;

@end
