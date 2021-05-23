/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKTouchOutsideViewGestureRecognizerTarget : NSObject

{
    SEL mAction;
    id mTarget;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
