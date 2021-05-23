/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCStreamingResults.h>

@class FCArticleSearchOperationFeedbackResult;

@interface FCArticleStreamingResults : FCStreamingResults

{
    FCArticleSearchOperationFeedbackResult *_feedbackResult;
}

@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult;

- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end
