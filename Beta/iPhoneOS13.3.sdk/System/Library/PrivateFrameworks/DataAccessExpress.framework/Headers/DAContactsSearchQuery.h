/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <DataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery

{
    _Bool _includePhotos;
    _Bool _calendarInitiated;
    NSString *_searchBase;
    NSString *_searchScope;
}

@property (copy, nonatomic) NSString *searchBase;
@property (copy, nonatomic) NSString *searchScope;
@property (nonatomic) _Bool includePhotos;
@property (nonatomic) _Bool calendarInitiated;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

@end
