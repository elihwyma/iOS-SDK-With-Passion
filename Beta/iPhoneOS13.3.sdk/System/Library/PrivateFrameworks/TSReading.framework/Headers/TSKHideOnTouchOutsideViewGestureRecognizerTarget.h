/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKHideOnTouchOutsideViewGestureRecognizerTarget : NSObject

{
    id mTarget;
    SEL mAction;
}

@property (nonatomic) id target;
@property (nonatomic) SEL action;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
