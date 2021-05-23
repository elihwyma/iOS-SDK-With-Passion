/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIDragInteraction, UIView;

@protocol CNComposeDragSourceDelegate;

@interface CNComposeDragSource : NSObject

{
    struct {
        _Bool respondsToTeamDataForItem;
        _Bool respondsToTargetedPreviewForItem;
        _Bool respondsToPreviewForItem;
        _Bool respondsToSuggestedNameForItem;
        _Bool respondsToLocalObjectForItem;
        _Bool respondsToDragWillEnd;
        _Bool respondsToAllowsMoveOperation;
        _Bool respondsToIsRestrictedToMail;
        _Bool respondsToDataOwner;
    } _delegateFlags;
    _Bool _allowsDragOverridingMasterSwitch;
    UIView *_sourceView;
    id <CNComposeDragSourceDelegate> _delegate;
    UIDragInteraction *_dragInteraction;
}

@property (weak, nonatomic) id <CNComposeDragSourceDelegate> delegate;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic, readonly) UIView *sourceView;
@property (nonatomic) _Bool allowsDragOverridingMasterSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithView:(id)arg1 delegate:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;

@end
