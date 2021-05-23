/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PURepeater : NSObject

{
    CDUnknownBlockType _block;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)stop;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)_fire;

@end
