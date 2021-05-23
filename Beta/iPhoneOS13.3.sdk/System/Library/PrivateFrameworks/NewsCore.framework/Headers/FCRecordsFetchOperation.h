/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchOperation.h>

@class FCInterestToken, FCRecordSource, NSArray, NSDictionary;

@interface FCRecordsFetchOperation : FCFetchOperation

{
    FCRecordSource *_recordSource;
    NSArray *_recordIdentifiers;
    NSArray *_ignoreCacheForRecordIDs;
    NSDictionary *_holdTokens;
    FCInterestToken *_fetchToken;
    FCInterestToken *_refreshToken;
}

- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2;
- (id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3;

@end
