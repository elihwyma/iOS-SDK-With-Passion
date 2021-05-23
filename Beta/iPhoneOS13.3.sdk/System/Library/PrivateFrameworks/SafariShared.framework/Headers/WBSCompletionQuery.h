/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURLRequest;

@interface WBSCompletionQuery : NSObject

{
    NSString *_normalizedQueryStringForParsec;
    _Bool _forLastSearch;
    NSString *_queryString;
    NSArray *_querySuggestions;
    NSString *_rewrittenQueryStringFromParsec;
    long long _queryID;
    unsigned long long _triggerEvent;
    NSString *_parsecFeedbackQueryIdentifier;
    NSURLRequest *_parsecSearchRequest;
    time_point_e708cccf _timestamp;
    NSString *_searchSuggestionProviderIdentifier;
    duration_6174cf92 _searchSuggestionProviderLatency;
    duration_6174cf92 _parsecLatency;
    unsigned long long _indexInFeedbackArray;
}

@property (copy, nonatomic) NSString *parsecFeedbackQueryIdentifier;
@property (copy, nonatomic) NSURLRequest *parsecSearchRequest;
@property (nonatomic, readonly) time_point_e708cccf timestamp;
@property (copy, nonatomic) NSString *searchSuggestionProviderIdentifier;
@property (nonatomic) duration_6174cf92 searchSuggestionProviderLatency;
@property (nonatomic) duration_6174cf92 parsecLatency;
@property (nonatomic) unsigned long long indexInFeedbackArray;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic, readonly) NSString *normalizedQueryStringForParsec;
@property (nonatomic, getter=isForLastSearch) _Bool forLastSearch;
@property (copy) NSArray *querySuggestions;
@property (copy, nonatomic) NSString *rewrittenQueryStringFromParsec;
@property (nonatomic, readonly) long long queryID;
@property (nonatomic) unsigned long long triggerEvent;

+ (void)initialize;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)initWithQueryString:(id)arg1;
- (id)initWithQueryString:(id)arg1 queryID:(long long)arg2;
- (id)initWithQueryString:(id)arg1 queryID:(long long)arg2 triggerEvent:(unsigned long long)arg3;
- (id)_initWithQueryString:(id)arg1 queryID:(long long)arg2 timestamp:(time_point_e708cccf)arg3 indexInFeedbackArray:(unsigned long long)arg4 triggerEvent:(unsigned long long)arg5;
- (id)initWithQueryString:(id)arg1 triggerEvent:(unsigned long long)arg2;

@end
