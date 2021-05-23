/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class PLXPCResponderOperatorComposition;

@interface PLTestService : PLService

{
    PLXPCResponderOperatorComposition *_presubmissionTestResponder;
}

@property (retain) PLXPCResponderOperatorComposition *presubmissionTestResponder;

+ (void)load;

- (id)init;
- (void)initOperatorDependancies;
- (id)presubmissionTest_testEPLMode:(id)arg1 withParam:(id)arg2;

@end
