/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@interface CEKAnimationGeneratorAnimation : NSObject

{
    double _startTime;
    double _duration;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) CDUnknownBlockType updateHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
