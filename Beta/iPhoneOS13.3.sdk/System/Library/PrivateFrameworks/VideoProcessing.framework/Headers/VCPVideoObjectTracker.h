/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCtrTracker;

__attribute__((visibility("hidden")))
@interface VCPVideoObjectTracker : NSObject

{
    VCPCtrTracker *_correlationTracker;
    float _confidence;
    int _lostCount;
    CDStruct_1b6d18a9 _start;
    struct CGRect _objectBoundsInitial;
    struct CGRect _objectBounds;
}

@property (nonatomic, readonly) struct CGRect objectBoundsInitial;
@property (nonatomic, readonly) struct CGRect objectBounds;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) CDStruct_1b6d18a9 start;
@property (nonatomic, readonly) int lostCount;

- (id)initWithObjectBounds:(struct CGRect)arg1 inFrame:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3;
- (int)trackObjectInFrame:(struct __CVBuffer *)arg1;

@end
