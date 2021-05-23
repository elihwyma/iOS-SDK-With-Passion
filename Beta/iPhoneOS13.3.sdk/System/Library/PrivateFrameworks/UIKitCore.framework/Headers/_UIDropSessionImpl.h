/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSProgress, NSString, _UIInternalDraggingSessionDestination;

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UIDropSessionImpl : NSObject

{
    NSArray *_items;
    id <UIDragSession> _localDragSession;
    unsigned long long _progressIndicatorStyle;
    _UIInternalDraggingSessionDestination *_sessionDestination;
}

@property (nonatomic, readonly) _UIInternalDraggingSessionDestination *sessionDestination;
@property (nonatomic, readonly, getter=_operationMask) unsigned long long operationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) _Bool allowsMoveOperation;
@property (nonatomic, readonly, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) id <UIDragSession> localDragSession;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (nonatomic, readonly) long long _dataOwner;
@property (nonatomic, readonly, getter=_allowsItemsToUpdate) _Bool _allowsItemsToUpdate;

- (struct CGPoint)locationInView:(id)arg1;
- (void)_itemsNeedUpdate:(id)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (id)_internalSession;
- (id)_createItemsOfClass:(Class)arg1 synchronouslyIfPossible:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestVisibleItems:(CDUnknownBlockType)arg1;
- (id)loadObjectsOfClass:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSessionDestination:(id)arg1;

@end
