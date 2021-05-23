/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSArray, SFRankingFeedback;

@interface NTCatchUpOperationResults : NSObject <Swift>

{
    NSArray *_items;
    SFRankingFeedback *_rankingFeedback;
    NSObject *_supplementalInterestToken;
}

@property (nonatomic, readonly) NSObject *supplementalInterestToken;
@property (copy, nonatomic, readonly) NSArray *items;
@property (copy, nonatomic, readonly) SFRankingFeedback *rankingFeedback;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 rankingFeedback:(id)arg2 supplementalInterestToken:(id)arg3;
- (id)initWithHeadlines:(id)arg1 rankingFeedback:(id)arg2;
- (id)initWithFeedItems:(id)arg1 supplementalInterestToken:(id)arg2;
- (id)resultsByCombiningWithResults:(id)arg1;

@end
