/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class CKQueryCursor, FCCKContentDatabase, NSArray, NSError, NSString;

@interface FCCKTagSearchQueryOperation : FCOperation

{
    FCCKContentDatabase *_database;
    unsigned long long _resultsLimit;
    NSString *_searchString;
    long long _tagType;
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    NSString *_locale;
    CDUnknownBlockType _queryCompletionHandler;
    NSString *_tagTypeString;
    NSArray *_resultRecords;
    CKQueryCursor *_resultCursor;
    NSError *_resultError;
}

@property (retain, nonatomic) NSString *tagTypeString;
@property (retain, nonatomic) NSArray *resultRecords;
@property (retain, nonatomic) CKQueryCursor *resultCursor;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) long long tagType;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)resetForRetry;
- (id)_constructTagSearchQuery;

@end
