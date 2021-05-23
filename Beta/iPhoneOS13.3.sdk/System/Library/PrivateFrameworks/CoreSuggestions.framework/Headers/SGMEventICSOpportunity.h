/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMEventICSOpportunity : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMEventICSSourceType_)arg2 recipient:(struct SGMEventICSSourceType_)arg3 accountSetup:(struct SGMTypeSafeBool_)arg4;

@end
