/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSAnalyticsEvent.h>

@class NSDate, NSString, TPSExperiment;

@interface TPSAnalyticsEventProcessedUsageEvents : TPSAnalyticsEvent

{
    _Bool _preHintRangeOutOfBounds;
    _Bool _postHintRangeOutOfBounds;
    NSString *_identifier;
    NSDate *_firstShownDate;
    TPSExperiment *_experiment;
    unsigned long long _desiredOutcomeCount;
    unsigned long long _preHintUsageCount;
    unsigned long long _postHintUsageCount;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *firstShownDate;
@property (nonatomic, readonly) TPSExperiment *experiment;
@property (nonatomic, readonly) unsigned long long desiredOutcomeCount;
@property (nonatomic, readonly) unsigned long long preHintUsageCount;
@property (nonatomic, readonly) unsigned long long postHintUsageCount;
@property (nonatomic, readonly) _Bool preHintRangeOutOfBounds;
@property (nonatomic, readonly) _Bool postHintRangeOutOfBounds;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)eventName;
- (id)analyticsEventRepresentation;
- (id)initWithUsageInfo:(id)arg1 experiment:(id)arg2 preHintUsageCount:(unsigned long long)arg3 postHintUsageCount:(unsigned long long)arg4 preHintRangeOutOfBounds:(_Bool)arg5 postHintRangeOutOfBounds:(_Bool)arg6 date:(id)arg7;

@end
