/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNClustererOptions.h>

@interface VNClustererQueryOptions : VNClustererOptions

- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;

@end
