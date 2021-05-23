/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <DataAccessExpress/DASearchQuery.h>

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery

{
    _Bool _allOrNone;
    _Bool _deepTraversal;
    _Bool _rebuildResults;
    int _bodyType;
    int _MIMESupport;
    NSString *_collectionID;
    long long _truncationSize;
    NSDate *_priorToDate;
}

@property (retain, nonatomic) NSString *collectionID;
@property (nonatomic) int bodyType;
@property (nonatomic) long long truncationSize;
@property (nonatomic) _Bool allOrNone;
@property (retain, nonatomic) NSDate *priorToDate;
@property (nonatomic) int MIMESupport;
@property (nonatomic) _Bool deepTraversal;
@property (nonatomic) _Bool rebuildResults;

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (id)dictionaryRepresentation;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;

@end
