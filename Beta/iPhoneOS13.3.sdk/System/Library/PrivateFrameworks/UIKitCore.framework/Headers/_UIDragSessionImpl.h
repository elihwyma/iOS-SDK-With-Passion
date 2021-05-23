/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, UIDragInteraction, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface _UIDragSessionImpl : NSObject

{
    NSMutableArray *_allItems;
    NSMapTable *_dragSourceInteractionByItem;
    NSHashTable *_allInteractions;
    _Bool _didHandOffDragImage;
    NSMutableSet *_addedDraggingItemsWaitingForHandOffOfDragImage;
    NSMutableSet *_addedDragItemsPendingUpdate;
    _Bool _sentSessionDidBegin;
    id _localContext;
    _UIInternalDraggingSessionSource *_internalDragSession;
    UIDragInteraction *_primaryInteraction;
}

@property (retain, nonatomic, getter=_internalDragSession, setter=_setInternalDragSession:) _UIInternalDraggingSessionSource *internalDragSession;
@property (weak, nonatomic, readonly) UIDragInteraction *primaryInteraction;
@property (nonatomic, readonly) NSSet *trackedInteractions;
@property (nonatomic, getter=_sentSessionDidBegin, setter=_setSentSessionDidBegin:) _Bool sentSessionDidBegin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) _Bool allowsMoveOperation;
@property (nonatomic, readonly, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property (retain, nonatomic) id localContext;
@property (nonatomic, readonly) long long _dataOwner;
@property (nonatomic, readonly, getter=_allowsItemsToUpdate) _Bool _allowsItemsToUpdate;

+ (id)activeSessions;
+ (id)_localDragSessionForSessionDestination:(id)arg1;

- (_Bool)_isActive;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_cancelDrag;
- (void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2;
- (id)initWithInteraction:(id)arg1;
- (_Bool)_canAddItems;
- (id)_setDownAnimation:(id)arg1 windowSceneForSetDownOfDragItem:(id)arg2;
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3;
- (_Bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_itemsNeedUpdate:(id)arg1;
- (id)dragSourceInteractionForDragItem:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(_Bool)arg2;
- (_Bool)draggingSessionPrefersFullSizePreviews:(id)arg1;
- (_Bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (void)draggingSessionWillBegin:(id)arg1;
- (void)draggingSessionDidMove:(id)arg1;
- (void)draggingSession:(id)arg1 willAddItems:(id)arg2;
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidTransferItems:(id)arg1;
- (void)_draggingSessionHandedOffDragImage:(id)arg1;
- (void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;
- (_Bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (id)_internalSession;

@end
