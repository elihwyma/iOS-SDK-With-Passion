/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString, TIProactiveTrigger, _ICPredictedItem;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle

{
    _Bool _isFromPhraseDictionary;
    _Bool _isFromTextChecker;
    _Bool _isSecureContentCandidate;
    _Bool _continuousPathConversion;
    _Bool _shouldAccept;
    _Bool _shouldInsertSpaceAfterSelection;
    unsigned int _usageTrackingMask;
    int _confidence;
    unsigned long long _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_responseKitCategory;
    NSString *_fromBundleId;
    unsigned long long _ageForConnectionsMetrics;
    double _excessPathRatio;
    _ICPredictedItem *_proactivePredictedItem;
    NSString *_label;
}

@property (nonatomic) _Bool isFromPhraseDictionary;
@property (nonatomic) _Bool isFromTextChecker;
@property (nonatomic, getter=isContinuousPathConversion) _Bool continuousPathConversion;
@property (nonatomic, getter=shouldAccept) _Bool shouldAccept;
@property (nonatomic, getter=shouldInsertSpaceAfterSelection) _Bool shouldInsertSpaceAfterSelection;
@property (nonatomic, getter=confidence) int confidence;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *fromBundleId;
@property (nonatomic) unsigned long long ageForConnectionsMetrics;
@property (nonatomic) double excessPathRatio;
@property (copy, nonatomic) _ICPredictedItem *proactivePredictedItem;

+ (int)type;
+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isSecureContentCandidate;
- (unsigned int)usageTrackingMask;
- (id)responseKitCategory;
- (unsigned long long)wordOriginFeedbackID;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)proactiveTrigger;
- (_Bool)isAutocorrection;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(_Bool)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7 responseKitCategory:(id)arg8;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(_Bool)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7;
- (id)initWithCandidate:(id)arg1 responseKitCategory:(id)arg2;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 label:(id)arg3;

@end
