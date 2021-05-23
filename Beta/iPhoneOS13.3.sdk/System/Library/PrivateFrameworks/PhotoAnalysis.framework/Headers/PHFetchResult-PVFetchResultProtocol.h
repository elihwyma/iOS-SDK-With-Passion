/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Photos/PHFetchResult.h>

@class NSArray;

@interface PHFetchResult (PVFetchResultProtocol)

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *fetchedObjects;

- (id)allObjects;
- (id)resultsAsArray;
- (id)resultsAsSet;

@end
