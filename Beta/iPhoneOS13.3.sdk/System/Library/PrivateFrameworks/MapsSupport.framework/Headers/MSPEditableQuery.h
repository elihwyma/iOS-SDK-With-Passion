/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPQuery.h>

@class MSPContainer, NSString, _MSPQueryState;

@interface MSPEditableQuery : MSPQuery

{
    _MSPQueryState *_editedState;
    MSPContainer *_container;
    NSString *_context;
}

- (id)_initWithSource:(id)arg1;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_visibleState;
- (void)_performEditWithStateTransformation:(CDUnknownBlockType)arg1 containerEdit:(CDUnknownBlockType)arg2;
- (void)deleteContentsObjectAtIndexes:(id)arg1;
- (void)deleteContentsObjectAtIndex:(unsigned long long)arg1;
- (void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;

@end
