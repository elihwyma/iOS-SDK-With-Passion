/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBStrokeSample : NSObject

{
    double _timestamp;
    struct CGPoint _point;
}

@property (nonatomic) struct CGPoint point;
@property (nonatomic) double timestamp;

- (id)initWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2;

@end
