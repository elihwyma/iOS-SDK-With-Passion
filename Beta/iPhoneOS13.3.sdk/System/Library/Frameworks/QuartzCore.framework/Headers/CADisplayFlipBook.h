/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAContext;

@interface CADisplayFlipBook : NSObject

{
    void *_impl;
}

@property (retain, nonatomic) CAContext *context;
@property (nonatomic, readonly) unsigned long long capacity;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)purge;
- (_Bool)renderForTime:(double)arg1 options:(id)arg2 error:(id *)arg3;
- (double)cancelAtTime:(double)arg1;
- (void)setPurgeable;
- (id)_initWithDisplayId:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 capacity:(unsigned long long)arg4;

@end
