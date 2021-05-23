/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSString, REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <Swift>

{
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void)pause;
- (void)resume;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;
- (_Bool)_suppportsPortarit;
- (_Bool)_suppportsSentimentAnalysis;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;

@end
