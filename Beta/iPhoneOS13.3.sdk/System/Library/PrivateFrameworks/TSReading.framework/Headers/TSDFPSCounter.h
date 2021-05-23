/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSDFPSCounter : NSObject

{
    NSMutableArray *_dateArray;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (id)p_fpsSummaryStringIncludingGraph:(_Bool)arg1;
- (id)p_getFPSInfo:(_Bool)arg1;
- (void)addFrame;
- (void)addFrameAtDrawTime:(double)arg1;
- (id)fpsSummaryString;
- (id)fpsGraphString;
- (void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(_Bool)arg6 slide:(long long)arg7;

@end
