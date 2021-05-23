/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode

{
    AXMPipelineContextInput *_previousInput;
    AXMPipelineContextInput *_currentInput;
    struct CGPoint _transpositionHistoryCircularBuffer[10];
    unsigned long long _transpositionHistoryLastRecordedIndex;
    _Bool _fillingHistoryBuffer;
    long long _registrationState;
}

@property (nonatomic, readonly) long long registrationState;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (void)_resetTranspositionHistory;
- (id)_translationalImageRegistrationRequestForInput:(id)arg1;
- (void)_recordTransposition:(struct CGPoint)arg1;
- (void)_resetImageRegistration;

@end
