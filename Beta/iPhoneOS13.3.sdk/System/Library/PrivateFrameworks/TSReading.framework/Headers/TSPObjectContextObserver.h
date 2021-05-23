/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSPObjectContextObserver : NSObject

{
    id _target;
    SEL _action;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;

- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
