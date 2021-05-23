/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CLSDataStore, CNAutocompleteResultFactory, NSMutableArray;

@interface CNAClassKitResultTransformVisitor : NSObject

{
    NSMutableArray *_results;
    CNAutocompleteResultFactory *_factory;
    CLSDataStore *_dataStore;
    unsigned long long _searchType;
}

@property (nonatomic, readonly) CNAutocompleteResultFactory *factory;
@property (nonatomic, readonly) CLSDataStore *dataStore;
@property (nonatomic, readonly) unsigned long long searchType;

+ (id)addressForPerson:(id)arg1 searchType:(unsigned long long)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFactory:(id)arg1 dataStore:(id)arg2 searchType:(unsigned long long)arg3;
- (id)reduceCollection:(id)arg1;
- (void)visitPerson:(id)arg1;
- (void)visitClass:(id)arg1;

@end
