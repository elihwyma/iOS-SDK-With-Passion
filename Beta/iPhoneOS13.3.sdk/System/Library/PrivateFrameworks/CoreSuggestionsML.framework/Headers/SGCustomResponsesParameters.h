/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@interface SGCustomResponsesParameters : NSObject

{
    _Bool _isCustomResponsesEnabled;
    _Bool _allowProfanity;
    unsigned long long _filterBatchSize;
    double _minimumTimeIntervalSecs;
    unsigned long long _minimumDistinctRecipients;
    unsigned long long _minimumReplyOccurences;
    double _timeDecayFactor;
    double _countExponent;
    double _distanceThreshold;
    double _minDecayedCountForPruning;
    unsigned long long _minDecayedCountForPrediction;
    unsigned long long _maxStoredMessages;
    unsigned long long _maxStoredCustomResponses;
    unsigned long long _knowledgeStoreQueryLimit;
    unsigned long long _maxReplyLength;
    double _maxReplyGapSecs;
    unsigned long long _compatibilityVersion;
}

@property (nonatomic, readonly) _Bool isCustomResponsesEnabled;
@property (nonatomic, readonly) unsigned long long filterBatchSize;
@property (nonatomic, readonly) double minimumTimeIntervalSecs;
@property (nonatomic, readonly) unsigned long long minimumDistinctRecipients;
@property (nonatomic, readonly) unsigned long long minimumReplyOccurences;
@property (nonatomic, readonly) double timeDecayFactor;
@property (nonatomic, readonly) double countExponent;
@property (nonatomic, readonly) double distanceThreshold;
@property (nonatomic, readonly) double minDecayedCountForPruning;
@property (nonatomic, readonly) unsigned long long minDecayedCountForPrediction;
@property (nonatomic, readonly) unsigned long long maxStoredMessages;
@property (nonatomic, readonly) unsigned long long maxStoredCustomResponses;
@property (nonatomic, readonly) unsigned long long knowledgeStoreQueryLimit;
@property (nonatomic, readonly) unsigned long long maxReplyLength;
@property (nonatomic, readonly) double maxReplyGapSecs;
@property (nonatomic, readonly) _Bool allowProfanity;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;

- (id)initWithDictionary:(id)arg1;

@end
