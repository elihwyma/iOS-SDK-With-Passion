/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaEntityCache, NSSet, NSString;

@protocol MPArtworkDataSource;

@protocol MPMediaLibraryDataProvider <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) MPMediaEntityCache *entityCache;
@property (nonatomic, readonly) id <MPArtworkDataSource> artworkDataSource;
@property (nonatomic, readonly) _Bool requiresAuthentication;
@property (nonatomic, readonly) NSSet *propertiesToCache;
@property (nonatomic, readonly) NSString *syncValidity;

- (unsigned short)loadValueForAggregateFunction:onItemsForProperty:queryCriteria:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)loadValueForAggregateFunction:onCollectionsForProperty:queryCriteria:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)loadProperties:ofItemWithIdentifier:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)loadProperties:ofCollectionWithIdentifier:groupingType:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)itemResultSetForQueryCriteria: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionResultSetForQueryCriteria: /* Error: Ran out of types for this method. */;
- (unsigned short)loadQueryCriteria:hasItemsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)loadQueryCriteria:hasCollectionsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)loadQueryCriteria:countOfItemsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)loadQueryCriteria:countOfCollectionsWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
