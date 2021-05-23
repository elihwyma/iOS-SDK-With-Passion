/*
 Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSString;

@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject

{
    int _timeLimit;
    NSString *_searchString;
    NSPredicate *_searchPredicate;
    id <DASearchQueryConsumer> _consumer;
    NSString *_searchID;
    unsigned long long _state;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSPredicate *searchPredicate;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) int timeLimit;
@property (weak, nonatomic) id <DASearchQueryConsumer> consumer;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (id)description;
- (id)dictionaryRepresentation;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (_Bool)isQueryRunning;

@end
