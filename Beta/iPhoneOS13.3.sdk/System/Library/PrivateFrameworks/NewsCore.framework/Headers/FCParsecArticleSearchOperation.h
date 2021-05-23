/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSString, SFMoreResults, SFRankingFeedback;

@protocol FCContentContext;

@interface FCParsecArticleSearchOperation : FCOperation

{
    NSString *_query;
    NSString *_keyboardInputMode;
    double _scale;
    id <FCContentContext> _contentContext;
    SFRankingFeedback *_previousRankingFeedback;
    CDUnknownBlockType _articleSearchCompletionHandler;
    NSArray *_results;
    unsigned long long _batchSize;
    SFRankingFeedback *_rankingFeedback;
    unsigned long long _parsecQueryID;
    SFMoreResults *_moreResults;
}

@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) SFRankingFeedback *rankingFeedback;
@property (nonatomic) unsigned long long parsecQueryID;
@property (retain, nonatomic) SFMoreResults *moreResults;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (retain, nonatomic) SFRankingFeedback *previousRankingFeedback;
@property (copy) CDUnknownBlockType articleSearchCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)_rankingFeedbackWithSection:(id)arg1;
- (id)initWithMoreResults:(id)arg1 parsecQueryID:(unsigned long long)arg2;

@end
