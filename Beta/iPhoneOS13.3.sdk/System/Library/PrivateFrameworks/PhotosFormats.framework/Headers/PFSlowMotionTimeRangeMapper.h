/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PFSlowMotionTimeRangeMapper : NSObject

{
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}

- (id)init;
- (float)scaledTimeForOriginalTime:(float)arg1;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (void)enumerateScaledRegionsUsingBlock:(CDUnknownBlockType)arg1;

@end
