/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWBracketSettings, NSArray, NSDictionary, NSMutableArray, NSString;

@protocol BWAdaptiveBracketingParameters;

@interface BWStillImageCaptureStreamSettings : NSObject

{
    NSString *_portType;
    int _captureType;
    unsigned long long _captureFlags;
    BWBracketSettings *_bracketSettings;
    NSArray *_validBracketedCaptureSequenceNumbers;
    CDStruct_1b6d18a9 _preferredTimeMachinePTS;
    int _timeMachineFrameCount;
    int _referenceFrameIndex;
    NSArray *_timeMachineBracketedCaptureParams;
    NSDictionary *_preBracketFrameCaptureParams;
    NSArray *_unifiedBracketedCaptureParams;
    _Bool _lensStabilizationEnabledForClientBracket;
    struct os_unfair_lock_s _adaptiveBracketingLock;
    id <BWAdaptiveBracketingParameters> _adaptiveBracketingParameters;
    NSMutableArray *_adaptivePreBracketFrameCaptureParams;
    NSMutableArray *_adaptiveUnifiedBracketedCaptureParams;
    _Bool _reachedEndOfAdaptiveBracketing;
}

@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) int timeMachineFrameCount;
@property (nonatomic, readonly) BWBracketSettings *bracketSettings;
@property (nonatomic, readonly) NSArray *validBracketedCaptureSequenceNumbers;
@property (nonatomic, readonly) _Bool hasValidFrames;
@property (nonatomic, readonly) int expectedFrameCount;
@property (nonatomic, readonly) int expectedFrameCaptureCount;
@property (nonatomic) CDStruct_1b6d18a9 preferredTimeMachinePTS;
@property (nonatomic, readonly) int expectedTimeMachineFrameCaptureCount;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)lensStabilizationEnabledForClientBracket;
- (void)setLensStabilizationEnabledForClientBracket:(_Bool)arg1;
- (id)adaptiveBracketingParameters;
- (id)unifiedBracketedCaptureParams;
- (int)adaptiveBracketingGroupCaptureCount;
- (_Bool)reachedEndOfAdaptiveBracketing;
- (int)referenceFrameIndex;
- (_Bool)isUnifiedBracketingErrorRecoveryFrame:(struct opaqueCMSampleBuffer *)arg1 isReferenceFrame:(_Bool)arg2;
- (int)currentExpectedAdaptiveBracketedFrameCaptureCount;
- (int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg1;
- (id)timeMachineBracketedCaptureParams;
- (id)preBracketFrameCaptureParams;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 validBracketedCaptureSequenceNumbers:(id)arg8;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 adaptiveBracketingParameters:(id)arg5;
- (id)adaptivePreBracketFrameCaptureParams;
- (id)adaptiveUnifiedBracketedCaptureParams;
- (void)setReachedEndOfAdaptiveBracketing:(_Bool)arg1;
- (void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg1 preBracketFrameCaptureParams:(id)arg2;

@end
