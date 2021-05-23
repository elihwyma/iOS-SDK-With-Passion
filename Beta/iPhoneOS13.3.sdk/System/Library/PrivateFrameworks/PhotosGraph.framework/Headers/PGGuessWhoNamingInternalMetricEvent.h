/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PGGraph;

@interface PGGuessWhoNamingInternalMetricEvent : NSObject

{
    NSString *_identifier;
    NSDictionary *_payload;
    PGGraph *_graph;
    double _precisionContactSuggestionTop1;
    double _precisionContactSuggestionTop2;
    double _precisionContactSuggestionTop3;
    double _precisionContactSuggestionTop10;
    double _precisionHighConfidenceContactSuggestion;
    unsigned long long _numberOfAddressSignalRegistrations;
    unsigned long long _numberOfBirthdaySignalRegistrations;
    unsigned long long _numberOfPotentialBirthdaySignalRegistrations;
    unsigned long long _numberOfMentionedAddressSignalRegistrations;
    unsigned long long _numberOfSharedAssetSignalRegistrations;
    unsigned long long _numberOfCMMSignalRegistrations;
    unsigned long long _numberOfCalendarSignalRegistrations;
    unsigned long long _numberOfFaceTimeSignalRegistrations;
    unsigned long long _numberOfContactFaceprintSignalRegistrations;
    unsigned long long _numberOfGenderSignalRegistrations;
    unsigned long long _numberOfSocialGroupSignalRegistrations;
    unsigned long long _numberOfRelationshipSignalRegistrations;
    double _precisionAddressSignal;
    double _precisionBirthdaySignal;
    double _precisionPotentialBirthdaySignal;
    double _precisionMentionedAddressSignal;
    double _precisionSharedAssetSignal;
    double _precisionCMMSignal;
    double _precisionCalendarSignal;
    double _precisionFaceTimeSignal;
    double _precisionContactFaceprintSignal;
    double _precisionGenderSignal;
    double _precisionSocialGroupSignal;
    double _precisionRelationshipSignal;
    unsigned long long _truePositiveAddressSignal;
    unsigned long long _falsePositiveAddressSignal;
    unsigned long long _truePositiveBirthdaySignal;
    unsigned long long _falsePositiveBirthdaySignal;
    unsigned long long _truePositivePotentialBirthdaySignal;
    unsigned long long _falsePositivePotentialBirthdaySignal;
    unsigned long long _truePositiveMentionedAddressSignal;
    unsigned long long _falsePositiveMentionedAddressSignal;
    unsigned long long _truePositiveSharedAssetSignal;
    unsigned long long _falsePositiveSharedAssetSignal;
    unsigned long long _truePositiveCMMSignal;
    unsigned long long _falsePositiveCMMSignal;
    unsigned long long _truePositiveCalendarSignal;
    unsigned long long _falsePositiveCalendarSignal;
    unsigned long long _truePositiveFaceTimeSignal;
    unsigned long long _falsePositiveFaceTimeSignal;
    unsigned long long _truePositiveContactFaceprintSignal;
    unsigned long long _falsePositiveContactFaceprintSignal;
    unsigned long long _truePositiveGenderSignal;
    unsigned long long _falsePositiveGenderSignal;
    unsigned long long _truePositiveSocialGroupSignal;
    unsigned long long _falsePositiveSocialGroupSignal;
    unsigned long long _truePositiveRelationshipSignal;
    unsigned long long _falsePositiveRelationshipSignal;
}

@property (nonatomic) unsigned long long truePositiveAddressSignal;
@property (nonatomic) unsigned long long falsePositiveAddressSignal;
@property (nonatomic) unsigned long long truePositiveBirthdaySignal;
@property (nonatomic) unsigned long long falsePositiveBirthdaySignal;
@property (nonatomic) unsigned long long truePositivePotentialBirthdaySignal;
@property (nonatomic) unsigned long long falsePositivePotentialBirthdaySignal;
@property (nonatomic) unsigned long long truePositiveMentionedAddressSignal;
@property (nonatomic) unsigned long long falsePositiveMentionedAddressSignal;
@property (nonatomic) unsigned long long truePositiveSharedAssetSignal;
@property (nonatomic) unsigned long long falsePositiveSharedAssetSignal;
@property (nonatomic) unsigned long long truePositiveCMMSignal;
@property (nonatomic) unsigned long long falsePositiveCMMSignal;
@property (nonatomic) unsigned long long truePositiveCalendarSignal;
@property (nonatomic) unsigned long long falsePositiveCalendarSignal;
@property (nonatomic) unsigned long long truePositiveFaceTimeSignal;
@property (nonatomic) unsigned long long falsePositiveFaceTimeSignal;
@property (nonatomic) unsigned long long truePositiveContactFaceprintSignal;
@property (nonatomic) unsigned long long falsePositiveContactFaceprintSignal;
@property (nonatomic) unsigned long long truePositiveGenderSignal;
@property (nonatomic) unsigned long long falsePositiveGenderSignal;
@property (nonatomic) unsigned long long truePositiveSocialGroupSignal;
@property (nonatomic) unsigned long long falsePositiveSocialGroupSignal;
@property (nonatomic) unsigned long long truePositiveRelationshipSignal;
@property (nonatomic) unsigned long long falsePositiveRelationshipSignal;
@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic) double precisionContactSuggestionTop1;
@property (nonatomic) double precisionContactSuggestionTop2;
@property (nonatomic) double precisionContactSuggestionTop3;
@property (nonatomic) double precisionContactSuggestionTop10;
@property (nonatomic) double precisionHighConfidenceContactSuggestion;
@property (nonatomic) unsigned long long numberOfAddressSignalRegistrations;
@property (nonatomic) unsigned long long numberOfBirthdaySignalRegistrations;
@property (nonatomic) unsigned long long numberOfPotentialBirthdaySignalRegistrations;
@property (nonatomic) unsigned long long numberOfMentionedAddressSignalRegistrations;
@property (nonatomic) unsigned long long numberOfSharedAssetSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCMMSignalRegistrations;
@property (nonatomic) unsigned long long numberOfCalendarSignalRegistrations;
@property (nonatomic) unsigned long long numberOfFaceTimeSignalRegistrations;
@property (nonatomic) unsigned long long numberOfContactFaceprintSignalRegistrations;
@property (nonatomic) unsigned long long numberOfGenderSignalRegistrations;
@property (nonatomic) unsigned long long numberOfSocialGroupSignalRegistrations;
@property (nonatomic) unsigned long long numberOfRelationshipSignalRegistrations;
@property (nonatomic) double precisionAddressSignal;
@property (nonatomic) double precisionBirthdaySignal;
@property (nonatomic) double precisionPotentialBirthdaySignal;
@property (nonatomic) double precisionMentionedAddressSignal;
@property (nonatomic) double precisionSharedAssetSignal;
@property (nonatomic) double precisionCMMSignal;
@property (nonatomic) double precisionCalendarSignal;
@property (nonatomic) double precisionFaceTimeSignal;
@property (nonatomic) double precisionContactFaceprintSignal;
@property (nonatomic) double precisionGenderSignal;
@property (nonatomic) double precisionSocialGroupSignal;
@property (nonatomic) double precisionRelationshipSignal;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraphManager:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_incrementSignalRegistrationForSignal:(unsigned long long)arg1 suggestionEdge:(id)arg2;
- (void)_incrementSignalEvaluationForSignal:(unsigned long long)arg1 suggestionEdge:(id)arg2 isCorrect:(_Bool)arg3;
- (id)_peopleIdentitiesSignals;
- (double)_precisionFromTruePositivesCount:(unsigned long long)arg1 falsePositivesCount:(unsigned long long)arg2;

@end
