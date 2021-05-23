/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIDragInteraction;

@protocol SXDragManagerDataSource;

@interface SXDragManager : NSObject

{
    _Bool _enabled;
    id <SXDragManagerDataSource> _dataSource;
    unsigned long long _sharingPolicy;
    UIDragInteraction *_dragInteraction;
}

@property (nonatomic, readonly) unsigned long long sharingPolicy;
@property (nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id <SXDragManagerDataSource> dataSource;
@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (id)initWithSharingPolicy:(unsigned long long)arg1 dataSource:(id)arg2;
- (void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg1;
- (id)itemsForSession:(id)arg1 atLocation:(struct CGPoint)arg2;
- (id)dragItemForObject:(id)arg1 withSession:(id)arg2;
- (_Bool)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2;

@end
