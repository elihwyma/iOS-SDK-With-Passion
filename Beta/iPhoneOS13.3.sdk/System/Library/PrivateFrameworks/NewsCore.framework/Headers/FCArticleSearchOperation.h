/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCArticleSearchOperationFeedbackResult, FCArticleStreamingResults, FCCloudContext, NSError, NSString;

@interface FCArticleSearchOperation : FCOperation

{
    NSString *_query;
    NSString *_keyboardInputMode;
    double _scale;
    unsigned long long _resultsLimit;
    FCCloudContext *_cloudContext;
    CDUnknownBlockType _articleSearchCompletion;
    unsigned long long _parsecQueryID;
    FCArticleStreamingResults *_results;
    NSError *_searchError;
    FCArticleSearchOperationFeedbackResult *_feedbackResult;
}

@property (retain, nonatomic) FCArticleStreamingResults *results;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long resultsLimit;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (copy) CDUnknownBlockType articleSearchCompletion;
@property (nonatomic) unsigned long long parsecQueryID;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_performSearchQuery:(CDUnknownBlockType)arg1;
- (id)initWithParsecQueryID:(unsigned long long)arg1;

@end
