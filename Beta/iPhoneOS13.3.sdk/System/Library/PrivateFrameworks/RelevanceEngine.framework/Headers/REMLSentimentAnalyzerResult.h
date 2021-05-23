/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REMLSentimentAnalyzerResult : NSObject

{
    float _postivieSentiment;
    float _negativeSentiment;
    float _certainty;
}

@property (nonatomic) float postivieSentiment;
@property (nonatomic) float negativeSentiment;
@property (nonatomic) float certainty;

@end
