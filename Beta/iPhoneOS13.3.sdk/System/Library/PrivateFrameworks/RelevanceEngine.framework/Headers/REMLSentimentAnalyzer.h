/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject

{
    REContentRanker *_contentRanker;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sentimentForTokens:(id)arg1;
- (id)initWithContentRanker:(id)arg1;
- (id)sentimentForText:(id)arg1;

@end
