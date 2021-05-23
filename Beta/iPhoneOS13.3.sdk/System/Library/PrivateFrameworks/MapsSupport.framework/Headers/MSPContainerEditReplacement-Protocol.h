/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSArray, NSIndexSet;

@protocol MSPContainerEditReplacement <Swift>

@property (nonatomic, readonly) NSArray *originalImmutableObjects;
@property (nonatomic, readonly) NSArray *replacementImmutableObjects;
@property (nonatomic, readonly) NSIndexSet *indexesOfReplacedObjects;

@end
