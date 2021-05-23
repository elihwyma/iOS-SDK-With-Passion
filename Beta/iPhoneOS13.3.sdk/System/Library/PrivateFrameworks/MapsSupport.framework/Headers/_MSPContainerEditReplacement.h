/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/_MSPContainerEdit.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditReplacement : _MSPContainerEdit

{
    NSArray *_originalObjects;
    NSArray *_originalImmutableObjects;
    NSArray *_replacementObjects;
    NSArray *_replacementImmutableObjects;
    NSIndexSet *_indexesOfReplacedObjects;
}

@property (nonatomic, readonly) NSArray *originalObjects;
@property (nonatomic, readonly) NSArray *replacementObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *originalImmutableObjects;
@property (nonatomic, readonly) NSArray *replacementImmutableObjects;
@property (nonatomic, readonly) NSIndexSet *indexesOfReplacedObjects;

- (id)initWithOriginalObjects:(id)arg1 replacementObjects:(id)arg2 indexes:(id)arg3;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;

@end
