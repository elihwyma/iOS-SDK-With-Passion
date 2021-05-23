/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCloudContext, NSMutableOrderedSet, NSString, SFMoreResults, SFRankingFeedback;

@interface FCArticleSearchStream : NSObject

{
    _Bool _fetching;
    _Bool _finished;
    NSString *_keyboardInputMode;
    double _scale;
    NSString *_query;
    SFMoreResults *_moreResults;
    SFRankingFeedback *_rankingFeedback;
    FCCloudContext *_cloudContext;
    unsigned long long _parsecQueryID;
    NSMutableOrderedSet *_articleSearchResults;
}

@property (nonatomic) _Bool fetching;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) SFMoreResults *moreResults;
@property (retain, nonatomic) SFRankingFeedback *rankingFeedback;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (nonatomic) unsigned long long parsecQueryID;
@property (retain, nonatomic) NSMutableOrderedSet *articleSearchResults;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithParsecQueryID:(unsigned long long)arg1;

@end
