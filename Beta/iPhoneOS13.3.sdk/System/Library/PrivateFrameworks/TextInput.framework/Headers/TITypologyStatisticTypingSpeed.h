/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyStatisticComposite.h>

@class TITypologyStatisticBasicCounts, TITypologyStatisticTimeElapsed;

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite

{
    TITypologyStatisticTimeElapsed *_timeElapsed;
    TITypologyStatisticBasicCounts *_basicCounts;
}

@property (nonatomic, readonly) TITypologyStatisticTimeElapsed *timeElapsed;
@property (nonatomic, readonly) TITypologyStatisticBasicCounts *basicCounts;
@property (nonatomic, readonly) float typingSpeed;

+ (id)statistic;
+ (id)statisticCompositeWithStatistics:(id)arg1;

- (id)aggregateReport;
- (id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2;

@end
