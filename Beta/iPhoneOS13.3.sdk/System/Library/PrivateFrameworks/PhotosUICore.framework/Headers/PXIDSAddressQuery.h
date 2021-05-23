/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface PXIDSAddressQuery : NSObject

{
    unsigned long long _destinationsCount;
    NSMutableSet *_mutableRemainingDestinations;
    NSMutableDictionary *_mutableStashedResults;
    unsigned long long _resultsCount;
    CDUnknownBlockType _resultHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;
@property (copy, nonatomic, readonly) NSSet *remainingDestinations;
@property (nonatomic, readonly) _Bool isComplete;

- (id)initWithDestinations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)stashDestination:(id)arg1 withResult:(_Bool)arg2;
- (id)popStashedResults;

@end
