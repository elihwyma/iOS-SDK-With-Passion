/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewAnimationFrame : NSObject

{
    id _value;
    double _startTime;
    double _duration;
}

@property (retain, nonatomic) id value;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;

- (id)description;
- (long long)compareStartTimes:(id)arg1;

@end
