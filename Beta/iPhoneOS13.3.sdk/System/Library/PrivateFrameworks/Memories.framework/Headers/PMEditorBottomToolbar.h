/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIToolbar.h>

@class NSString, UIBarButtonItem;

@protocol PMEditorToolbarDelegate, PMPlayerControlling;

@interface PMEditorBottomToolbar : UIToolbar

{
    _Bool _showDoneCancelButtons;
    _Bool _fromTitle;
    _Bool _fromMusic;
    _Bool _fromDuration;
    _Bool _autoEditingIsInProgress;
    id <PMPlayerControlling> _playerController;
    id <PMEditorToolbarDelegate> _toolbarDelegate;
    unsigned long long _spinnerState;
    UIBarButtonItem *_doneButtonItem;
}

@property (nonatomic) unsigned long long spinnerState;
@property (nonatomic) _Bool autoEditingIsInProgress;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (weak, nonatomic) id <PMPlayerControlling> playerController;
@property (weak, nonatomic) id <PMEditorToolbarDelegate> toolbarDelegate;
@property (nonatomic) _Bool showDoneCancelButtons;
@property (nonatomic) _Bool fromTitle;
@property (nonatomic) _Bool fromMusic;
@property (nonatomic) _Bool fromDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (void)updateItems;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_flexibleSpaceItem;
- (void)pause:(id)arg1;
- (void)_done:(id)arg1;
- (id)_cancelButtonItem;
- (void)autoEditingDidEnd;
- (void)_updateItemsAnimated:(_Bool)arg1;
- (void)_handlePlayerDidBeginPlayingNotification:(id)arg1;
- (void)_handlePlayerDidDidPlayToEndTimeNotification:(id)arg1;
- (id)_doneActivityButtonRow;
- (id)_playActivityButtonRow;
- (id)_playButtonRow;
- (void)_play:(id)arg1;
- (id)_pauseButtonRow;
- (void)_postAggDPlayerStatus:(_Bool)arg1;
- (id)_playButtonItem;
- (id)_pauseButtonItem;
- (id)_fixedSpaceItem;
- (id)_activityItem;
- (void)startAutoEditWaitingBehavior;
- (void)cancelAutoEditWaitingBehavior;
- (void)performAutoEditDidCompleteAction;
- (void)autoEditingWillBegin;

@end
