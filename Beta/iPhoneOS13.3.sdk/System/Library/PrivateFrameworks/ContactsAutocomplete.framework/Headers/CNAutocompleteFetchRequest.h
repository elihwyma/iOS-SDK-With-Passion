/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchContext, NSArray, NSString;

@interface CNAutocompleteFetchRequest : NSObject

{
    NSString *_searchString;
    NSString *_priorityDomainForSorting;
    unsigned long long _searchType;
    CNAutocompleteFetchContext *_fetchContext;
    struct NSNumber *_shouldIncludeGroupResultsImpl;
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeLocalExtensions;
    _Bool _includeDirectoryServers;
    _Bool _includeCalendarServers;
    _Bool _includePredictions;
}

@property (readonly) NSArray *searchableProperties;
@property (copy) NSString *searchString;
@property (copy) NSString *priorityDomainForSorting;
@property unsigned long long searchType;
@property (copy) CNAutocompleteFetchContext *fetchContext;
@property _Bool includeContacts;
@property _Bool includeRecents;
@property _Bool includeSuggestions;
@property _Bool includeLocalExtensions;
@property _Bool includeDirectoryServers;
@property _Bool includeCalendarServers;
@property _Bool includePredictions;
@property _Bool shouldIncludeGroupResults;
@property (copy) NSString *sendingAddress;
@property _Bool includeServers;

+ (_Bool)supportsSecureCoding;
+ (id)request;
+ (id)searchablePropertiesForSearchType:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid:(id *)arg1;
- (id)includeDebugString;
- (id)searchTypeDebugString;
- (id)shouldIncludeGroupResultsDebugString;
- (id)executeWithDelegate:(id)arg1;

@end
