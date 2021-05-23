/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface PPMFeedbackRegistered : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 client_id:(id)arg2 variant_name:(id)arg3 type:(struct PPMPortraitFeedbackType_)arg4 component:(struct PPMPortraitComponent_)arg5 mapping_id:(id)arg6 from_portrait:(struct PPMTypeSafeBool_)arg7;

@end
