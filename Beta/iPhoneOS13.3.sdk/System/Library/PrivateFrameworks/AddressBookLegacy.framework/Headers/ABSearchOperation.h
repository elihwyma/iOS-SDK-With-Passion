/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSPredicate, NSThread;

@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation

{
    void *_addressBook;
    void *_internalSearchAddressBook;
    CDUnknownBlockType _progressBlock;
    NSThread *_progressBlockThread;
    void *_context;
    id <ABSearchOperationDelegate> _delegate;
    unsigned int _sortOrdering;
    NSPredicate *_predicate;
    NSArray *_prefetchProperties;
}

@property (copy, nonatomic) CDUnknownBlockType progressBlock;
@property (nonatomic) void *internalSearchAddressBook;
@property (nonatomic) void *addressBook;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *prefetchProperties;
@property (nonatomic) id <ABSearchOperationDelegate> delegate;
@property (nonatomic) void *context;
@property (nonatomic) unsigned int sortOrdering;

+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void *)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 inGroup:(void *)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void *)arg2 includeSourceInResults:(_Bool)arg3 addressBook:(void *)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 inSource:(void *)arg2 includeSourceInResults:(_Bool)arg3 includePhotosInResults:(_Bool)arg4 addressBook:(void *)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void *)arg3;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void *)arg2;
+ (id)personPredicateWithGroup:(void *)arg1 addressBook:(void *)arg2;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (_Bool)isConcurrent;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)arg1;

@end
