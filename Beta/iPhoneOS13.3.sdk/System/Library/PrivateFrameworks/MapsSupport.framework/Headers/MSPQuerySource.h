/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPContainer, NSHashTable, NSString, _MSPQueryState;

@interface MSPQuerySource : NSObject

{
    MSPContainer *_owningContainer;
    MSPQuerySource *_parentSource;
    CDUnknownBlockType _mappingBlock;
    CDUnknownBlockType _preprocessingBlock;
    NSHashTable *_observers;
    _MSPQueryState *_state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_container;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)_didReceiveContainerContents:(id)arg1 context:(id)arg2;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_initWithParentSource:(id)arg1 preprocessingBlock:(CDUnknownBlockType)arg2 mappingBlock:(CDUnknownBlockType)arg3;
- (id)_initWithOwningContainer:(id)arg1;
- (id)sourceByMappingContentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)sourceByMappingContentsUsingPreprocessingBlock:(CDUnknownBlockType)arg1 mappingBlock:(CDUnknownBlockType)arg2;
- (id)newQuery;
- (id)newEditableQuery;

@end
