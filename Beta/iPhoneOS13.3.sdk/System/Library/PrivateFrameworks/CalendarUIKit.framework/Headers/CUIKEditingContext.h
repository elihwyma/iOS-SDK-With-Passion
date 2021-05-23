/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class CUIKEditingContextGroup, CUIKEditingManager, NSArray;

@protocol CUIKCommitDelegate, CUIKDecisionDelegate, CUIKEditingContextObserver, CUIKUndoDelegate;

@interface CUIKEditingContext : NSObject

{
    _Bool _isActive;
    _Bool _isOpen;
    CUIKEditingContextGroup *_group;
    CUIKEditingManager *_editingManager;
    unsigned long long _interfaceType;
    id <CUIKDecisionDelegate> _decisionDelegate;
    id <CUIKUndoDelegate> _undoDelegate;
    id <CUIKCommitDelegate> _commitDelegate;
    id <CUIKEditingContextObserver> _observer;
    NSArray *_objectsBeingEdited;
    NSArray *_pendingObserverUpdates;
    NSArray *_pendingGroupUpdates;
}

@property unsigned long long interfaceType;
@property (retain) NSArray *objectsBeingEdited;
@property (weak) id <CUIKEditingContextObserver> observer;
@property _Bool isActive;
@property _Bool isOpen;
@property (retain) NSArray *pendingObserverUpdates;
@property (retain) NSArray *pendingGroupUpdates;
@property (weak) CUIKEditingContextGroup *group;
@property (weak) CUIKEditingManager *editingManager;
@property (weak) id <CUIKDecisionDelegate> decisionDelegate;
@property (weak) id <CUIKUndoDelegate> undoDelegate;
@property (weak) id <CUIKCommitDelegate> commitDelegate;

@end
