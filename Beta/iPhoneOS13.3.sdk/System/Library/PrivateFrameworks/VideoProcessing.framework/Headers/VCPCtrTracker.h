/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCtrTracker : NSObject

{
    struct CGPoint *P;
    struct {
        CDStruct_183601bc *_field1;
        CDStruct_183601bc *_field2;
        CDStruct_183601bc *_field3;
        struct tplTracker_resampler_context *_field4;
        CDStruct_183601bc *_field5;
    } *context;
    _Bool stable;
    _Bool lostTrack;
    float _confidence;
}

@property struct CGPoint *box;
@property _Bool stableInd;
@property _Bool lostTrackInd;
@property float confidence;

- (id)init;
- (void)dealloc;
- (void)setupTrackerWithReferenceFrame:(struct __CVBuffer *)arg1 withROI:(struct CGPoint *)arg2;
- (void)trackInFrame:(struct __CVBuffer *)arg1;

@end
