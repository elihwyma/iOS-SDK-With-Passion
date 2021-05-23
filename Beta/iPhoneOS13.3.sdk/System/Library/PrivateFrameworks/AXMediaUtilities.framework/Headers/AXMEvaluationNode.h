/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMVisionEngineNode.h>

@interface AXMEvaluationNode : AXMVisionEngineNode

{
    double _minimumConfidence;
    unsigned long long _priority;
    unsigned long long _effectivePriority;
}

@property (nonatomic) unsigned long long effectivePriority;
@property (nonatomic) double minimumConfidence;
@property (nonatomic) unsigned long long priority;

+ (_Bool)supportsSecureCoding;
+ (void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1;
+ (unsigned long long)defaultPriority;
+ (_Bool)isANEDeviceAvailable;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 error:(id *)arg4;
- (_Bool)shouldEvaluate:(id)arg1;
- (void)boostEffectivePriority;
- (void)resetEffectivePriority;
- (id)_diagnosticNameForRequests:(id)arg1 diagnostics:(id)arg2;

@end
