/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMSelfIdModelScore : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMSelfIdModelType_)arg2 result:(struct SGMTypeSafeBool_)arg3 supervision:(struct SGMSelfIdSupervisionType_)arg4 extractionModelVersion:(unsigned long long)arg5;

@end
