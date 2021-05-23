/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMFoundInMailModelScore : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMFoundInMailModelType_)arg2 contactDetail:(struct SGMContactDetailType_)arg3 result:(struct SGMTypeSafeBool_)arg4 correct:(struct SGMTypeSafeBool_)arg5 mode:(struct SGFoundInMailModelMode_)arg6 supervision:(struct SGMFoundInMailSupervisionType_)arg7;

@end
