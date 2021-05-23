/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPMetaSegment : NSObject

{
    unsigned long long _numOfFrames;
    CDStruct_e83c9415 _timeRange;
}

@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) unsigned long long numOfFrames;

- (id)init;
- (void)mergeSegment:(id)arg1;
- (void)updateSegment:(CDStruct_1b6d18a9)arg1;
- (void)resetSegment:(CDStruct_1b6d18a9)arg1;
- (void)finalizeAtTime:(CDStruct_1b6d18a9)arg1;

@end
