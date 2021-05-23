/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface _PXMapStoreChange : NSObject

{
    NSSet *_addedItems;
    NSSet *_removedItems;
    NSSet *_updatedItems;
}

@property (retain) NSSet *addedItems;
@property (retain) NSSet *removedItems;
@property (retain) NSSet *updatedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)hasChanges;
- (void)updateWithChange:(id)arg1;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3;

@end
