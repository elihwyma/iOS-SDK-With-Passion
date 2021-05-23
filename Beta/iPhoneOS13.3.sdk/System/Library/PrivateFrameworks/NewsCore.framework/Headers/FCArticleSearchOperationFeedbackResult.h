/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class SFRankingFeedback;

@interface FCArticleSearchOperationFeedbackResult : NSObject

{
    SFRankingFeedback *_resultRankingFeedback;
}

@property (copy, nonatomic, readonly) SFRankingFeedback *resultRankingFeedback;

- (id)initWithSearchOperationRankingFeedBack:(id)arg1;

@end
