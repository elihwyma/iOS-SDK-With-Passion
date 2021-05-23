/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, SBIconView, SBPlaceholderIcon;

@interface SBIconDragContext : NSObject

{
    NSMutableSet *_sourceIconViews;
    NSMapTable *_iconToExpandAfterDropAnimation;
    NSMutableSet *_destinationIconViews;
    NSCountedSet *_messageExpectations;
    NSMutableSet *_enteredIconListViews;
    NSMapTable *_targetsForCancellingIconViews;
    NSMapTable *_dragPreviewForIconViews;
    NSMutableSet *_appLocalContexts;
    NSMutableDictionary *_destinationFolderIconViews;
    NSMutableSet *_dropAnimatingDragItems;
    NSMutableDictionary *_initialIconPaths;
    NSMapTable *_bouncedIcons;
    NSMapTable *_appDragLocalContexts;
    NSMapTable *_iconViewDropAssertions;
    _Bool _performedIconDrop;
    _Bool _cancelled;
    _Bool _notifiedDelegateForDropSession;
    long long _state;
    SBPlaceholderIcon *_iconPlaceholder;
    NSArray *_grabbedIconViews;
    NSSet *_itemIdentifiers;
    NSSet *_sourceIcons;
    SBIconView *_primaryIconView;
    SBIconView *_recipientIconView;
    NSDate *_lastUserInteractionDate;
    NSTimer *_watchdogTimer;
}

@property (nonatomic) long long state;
@property (nonatomic, readonly, getter=isUserActive) _Bool userActive;
@property (nonatomic, readonly) _Bool hasUserDragged;
@property (retain, nonatomic) SBPlaceholderIcon *iconPlaceholder;
@property (copy, nonatomic) NSArray *grabbedIconViews;
@property (copy, nonatomic) NSSet *itemIdentifiers;
@property (copy, nonatomic) NSSet *sourceIcons;
@property (retain, nonatomic) SBIconView *primaryIconView;
@property (nonatomic, readonly, getter=isWaitingForMessage) _Bool waitingForMessage;
@property (copy, nonatomic, readonly) NSSet *expectedMessages;
@property (nonatomic) _Bool performedIconDrop;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic) SBIconView *recipientIconView;
@property (copy, nonatomic, readonly) NSSet *appLocalContexts;
@property (copy, nonatomic) NSDate *lastUserInteractionDate;
@property (retain, nonatomic) NSTimer *watchdogTimer;
@property (nonatomic) _Bool notifiedDelegateForDropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)addItemIdentifier:(id)arg1;
- (_Bool)hasSourceIconView:(id)arg1;
- (void)enumerateSourceIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)resetLastUserInteractionDate;
- (void)setAppDragLocalContext:(id)arg1 forDragItem:(id)arg2;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (void)setInitialIndexPath:(id)arg1 forIcon:(id)arg2;
- (id)initialIndexPathForIcon:(id)arg1;
- (id)initialIndexPathForIconWithIdentifier:(id)arg1;
- (_Bool)hasItemIdentifier:(id)arg1;
- (void)swapSourceIconWithIdentifier:(id)arg1 withIcon:(id)arg2;
- (void)removeAllMessageExpectations;
- (void)addMessageExpectationNamed:(id)arg1;
- (void)addSourceIcon:(id)arg1;
- (void)addSourceIconView:(id)arg1;
- (void)addGrabbedIconView:(id)arg1;
- (void)removeMessageExpectationNamed:(id)arg1;
- (void)setTargetIconView:(id)arg1 forCancellingIconView:(id)arg2;
- (id)targetIconViewForCancellingIconView:(id)arg1;
- (void)setDragPreview:(id)arg1 forIconView:(id)arg2;
- (void)enumerateDragPreviewsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasEnteredIconListView:(id)arg1;
- (void)addEnteredIconListView:(id)arg1;
- (void)setBouncedIcon:(id)arg1 forListModel:(id)arg2;
- (id)listModelEnumeratorForBouncedIcons;
- (id)bouncedIconForListModel:(id)arg1;
- (void)setIcon:(id)arg1 shouldExpandAfterDropAnimationForDragItems:(id)arg2;
- (void)setDestinationFolderIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)addDestinationIconView:(id)arg1;
- (void)enumerateDestinationIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)destinationFolderIconViewForIconWithIdentifier:(id)arg1;
- (void)addDropAnimatingDragItem:(id)arg1;
- (id)iconToExpandAfterDropAnimationForDragItem:(id)arg1;
- (_Bool)isAnimatingDropForDragItem:(id)arg1;
- (void)clearDropAssertionForIconView:(id)arg1;
- (void)addAppLocalContext:(id)arg1;
- (void)addSourceIcons:(id)arg1;
- (_Bool)hasMessageExpectationNamed:(id)arg1;

@end
