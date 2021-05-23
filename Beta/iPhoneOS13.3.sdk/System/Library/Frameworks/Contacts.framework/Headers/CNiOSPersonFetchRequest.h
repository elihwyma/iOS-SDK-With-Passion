/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNManagedConfiguration, NSArray;

@protocol CNiOSContactPredicate;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetchRequest : NSObject

{
    id <CNiOSContactPredicate> _predicate;
    _Bool _shouldSort;
    unsigned int _sortOrder;
    unsigned long long _options;
    _Bool _unifiedFetch;
    NSArray *_keysToFetch;
    unsigned long long _batchSize;
    CNManagedConfiguration *_managedConfiguration;
}

@property (readonly) id <CNiOSContactPredicate> predicate;
@property (readonly) _Bool shouldSort;
@property (readonly) unsigned long long options;
@property (readonly) unsigned int sortOrder;
@property (readonly) unsigned int sortOrderIncludingNone;
@property (readonly) NSArray *keysToFetch;
@property (readonly) _Bool unifiedFetch;
@property (readonly) unsigned long long batchSize;
@property (readonly) CNManagedConfiguration *managedConfiguration;

+ (id)validatePredicate:(id)arg1 error:(id *)arg2;
+ (id)fetchRequestFromCNFetchRequest:(id)arg1 managedConfiguration:(id)arg2 error:(id *)arg3;
+ (long long)resolvedSortOrderFromContactSortOrder:(long long)arg1;
+ (id)effectivePredicate:(id)arg1;

- (id)initWithPredicate:(id)arg1 keysToFetch:(id)arg2 shouldSort:(_Bool)arg3 sortOrder:(unsigned int)arg4 unifiedFetch:(_Bool)arg5 batchSize:(unsigned long long)arg6 managedConfiguration:(id)arg7 options:(unsigned long long)arg8;

@end
