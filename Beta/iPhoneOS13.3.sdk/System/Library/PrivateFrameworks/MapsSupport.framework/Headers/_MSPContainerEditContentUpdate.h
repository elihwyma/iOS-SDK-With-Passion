/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/_MSPContainerEdit.h>

@class NSString;

@protocol MSPImmutableObject, MSPMutableObject;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditContentUpdate : _MSPContainerEdit

{
    id <MSPMutableObject> _updatedObject;
    id <MSPImmutableObject> _updatedImmutableObject;
}

@property (nonatomic, readonly) id <MSPMutableObject> updatedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <MSPImmutableObject> updatedImmutableObject;

- (id)initWithUpdatedObject:(id)arg1;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
- (id)initWithUpdatedImmutableObject:(id)arg1;

@end
