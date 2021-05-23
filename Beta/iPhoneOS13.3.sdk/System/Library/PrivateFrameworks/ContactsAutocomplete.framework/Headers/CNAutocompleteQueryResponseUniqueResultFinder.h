/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject

{
    NSMutableArray *_uniqueResults;
    NSMutableArray *_hashes;
    NSDictionary *_hashIndex;
    NSIndexSet *_firstIndexes;
    NSMutableIndexSet *_uniqueResultIndexes;
    CDUnknownBlockType _duplicateResultHandler;
}

+ (id)findUniqueResults:(id)arg1 duplicateResultHandler:(CDUnknownBlockType)arg2;

- (void)removeDuplicateResults;
- (id)initWithResults:(id)arg1 duplicateResultHandler:(CDUnknownBlockType)arg2;
- (id)findUniqueResults;
- (void)generateHashes;
- (void)indexHashes;
- (void)resolveDuplicatesWithinIndexes:(id)arg1;

@end
