/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/_MSPContainerEdit.h>

@class NSArray, NSIndexSet, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditAddition : _MSPContainerEdit

{
    NSMapTable *_identifiersAtopByIdentifier;
    NSArray *_objects;
    NSArray *_addedImmutableObjects;
    NSIndexSet *_indexesOfAddedObjects;
}

@property (nonatomic, readonly) NSArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *addedImmutableObjects;
@property (nonatomic, readonly) NSIndexSet *indexesOfAddedObjects;

- (id)initWithObjects:(id)arg1 indexes:(id)arg2 identifiersAtop:(id)arg3;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
- (id)identifierForObjectAtopAddedImmutableObject:(id)arg1;

@end
