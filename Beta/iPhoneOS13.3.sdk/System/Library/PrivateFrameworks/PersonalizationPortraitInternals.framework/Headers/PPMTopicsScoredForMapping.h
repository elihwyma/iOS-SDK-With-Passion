/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface PPMTopicsScoredForMapping : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 mappingId:(id)arg3 resultSizeLog10:(unsigned long long)arg4 timeLimited:(struct PPMTypeSafeBool_)arg5 exclusionSpec:(struct PPMTypeSafeBool_)arg6 error:(struct PPMTypeSafeBool_)arg7;

@end
