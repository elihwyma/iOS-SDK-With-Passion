/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface PPMTopicsScored : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 resultSizeLog10:(unsigned long long)arg3 limitHit:(struct PPMTypeSafeBool_)arg4 timeSpec:(struct PPMTypeSafeBool_)arg5 timeLimited:(struct PPMTypeSafeBool_)arg6 exclusionSpec:(struct PPMTypeSafeBool_)arg7 error:(struct PPMTypeSafeBool_)arg8;

@end
