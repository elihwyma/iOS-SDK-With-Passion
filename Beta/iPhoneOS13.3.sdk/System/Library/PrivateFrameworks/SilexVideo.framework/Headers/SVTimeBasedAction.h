/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@interface SVTimeBasedAction : NSObject

{
    double _time;
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) CDUnknownBlockType block;

- (id)initWithTime:(double)arg1 block:(CDUnknownBlockType)arg2;

@end
