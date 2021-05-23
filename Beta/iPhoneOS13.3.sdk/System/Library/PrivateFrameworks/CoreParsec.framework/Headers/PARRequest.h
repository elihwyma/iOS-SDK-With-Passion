/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@protocol OS_nw_activity;

@interface PARRequest : NSObject

{
    unsigned long long _queryId;
    _Bool _verboseReply;
    _Bool _pretend;
    double _scale;
    NSString *_keyboardInputMode;
    unsigned long long _triggerEvent;
    NSArray *_queryItems;
    NSDictionary *_headerItems;
    NSObject<OS_nw_activity> *_nwActivity;
    char *_nwActivityToken;
}

@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) NSObject<OS_nw_activity> *nwActivity;
@property (nonatomic, readonly) char *nwActivityToken;
@property (nonatomic, readonly) unsigned int nwActivityLabel;
@property (nonatomic, readonly) unsigned long long queryId;
@property (nonatomic, readonly) unsigned long long clientQueryId;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *keyboardInputMode;
@property (nonatomic) _Bool verboseReply;
@property (nonatomic) _Bool pretend;
@property (copy, nonatomic) NSArray *queryItems;
@property (copy, nonatomic) NSDictionary *headerItems;

+ (_Bool)supportsSecureCoding;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
+ (id)cardRequestWithURL:(id)arg1;
+ (id)moreResultsRequestWithURL:(id)arg1;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)zeroKeywordRequest;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5;
+ (id)searchRequestWithString:(id)arg1;
+ (id)searchRequestWithEngagedSuggestion:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)moreResultsRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)cardRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)zeroKeywordRequest:(unsigned long long)arg1;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(long long)arg4 appBundleId:(id)arg5 queryId:(unsigned long long)arg6;
+ (id)flightRequestForQuery:(id)arg1 date:(id)arg2 appBundleId:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)responseClass;
- (void)setQueryId:(unsigned long long)arg1;

@end
