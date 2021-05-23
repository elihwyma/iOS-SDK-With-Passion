/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMSelfIdPatternMatched : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 patternType:(struct SGMSIPatternType_)arg2 patternHash:(id)arg3 nameTokens:(unsigned long long)arg4 nameClass:(struct SGMSINameClassification_)arg5 messageIndex:(unsigned long long)arg6;

@end
