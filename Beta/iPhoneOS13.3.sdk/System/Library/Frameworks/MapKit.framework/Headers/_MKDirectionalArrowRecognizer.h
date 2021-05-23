/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKDirectionalArrowRecognizer : NSObject

{
    id _target;
    SEL _action;
    long long _state;
    long long _arrows;
    long long _lastArrows;
}

@property (nonatomic) long long state;
@property (nonatomic, readonly) long long arrows;
@property (nonatomic, readonly) long long lastArrows;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)handleArrowMask:(long long)arg1;

@end
