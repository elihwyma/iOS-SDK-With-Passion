/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLRenderPipelineState;

@interface ARCoachingDotsRenderer : NSObject

{
    unsigned long long _pixelFormat;
    id <MTLRenderPipelineState> _pipelineState;
}

- (id)init:(id)arg1 pixelFormat:(unsigned long long)arg2 metalLibrary:(id)arg3 sampleCount:(int)arg4;
- (void)encode:(id)arg1 renderCommandEncoder:(id)arg2 mvp:(CDStruct_14d5dc5e)arg3 visible:(float)arg4 renderParams:(CDStruct_818bb265)arg5 time:(double)arg6;

@end
