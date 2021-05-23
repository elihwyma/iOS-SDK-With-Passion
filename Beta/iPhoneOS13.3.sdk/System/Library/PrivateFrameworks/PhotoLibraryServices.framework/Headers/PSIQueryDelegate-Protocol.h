/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSObject, PSITokenizer;

@protocol OS_dispatch_queue;

@protocol PSIQueryDelegate <Swift>

@property (readonly) PSITokenizer *tokenizer;
@property (readonly) NSObject<OS_dispatch_queue> *groupResultsQueue;

- (unsigned short)suggestionWhitelistedScenes;
- (unsigned short)executeQuery:resultsHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)groupIdsMatchingString:categories:textIsSearchable: /* Error: Ran out of types for this method. */;
- (unsigned short)groupWithMatchingGroupId:dateFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)groupResultWithDateFilter:datedTokens: /* Error: Ran out of types for this method. */;
- (unsigned short)wordEmbeddingMatchesForToken: /* Error: Ran out of types for this method. */;
- (unsigned short)groupArraysFromGroupIdSets:dateFilter:progressBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)meNodeIdentifier;

@end
