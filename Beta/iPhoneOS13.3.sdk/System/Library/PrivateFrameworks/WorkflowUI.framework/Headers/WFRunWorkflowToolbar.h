/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, NSUndoManager, UIBarButtonItem, UIToolbar;

@protocol WFRunWorkflowToolbarDelegate;

@interface WFRunWorkflowToolbar : UIView

{
    _Bool _running;
    _Bool _editing;
    _Bool _pulsating;
    _Bool _loading;
    _Bool _playEnabled;
    _Bool _shareEnabled;
    _Bool _shareHidden;
    NSUndoManager *_workflowUndoManager;
    id <WFRunWorkflowToolbarDelegate> _delegate;
    UIToolbar *_toolbar;
    UIBarButtonItem *_undoItem;
    UIBarButtonItem *_redoItem;
    UIBarButtonItem *_addItem;
    UIBarButtonItem *_runItem;
    UIBarButtonItem *_stopItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_flexibleSpaceItem;
}

@property (weak, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIBarButtonItem *undoItem;
@property (retain, nonatomic) UIBarButtonItem *redoItem;
@property (retain, nonatomic) UIBarButtonItem *addItem;
@property (retain, nonatomic) UIBarButtonItem *runItem;
@property (retain, nonatomic) UIBarButtonItem *stopItem;
@property (retain, nonatomic) UIBarButtonItem *shareItem;
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceItem;
@property (weak, nonatomic) NSUndoManager *workflowUndoManager;
@property (nonatomic, getter=isRunning) _Bool running;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic, getter=isPulsating) _Bool pulsating;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic) _Bool playEnabled;
@property (nonatomic) _Bool shareEnabled;
@property (nonatomic) _Bool shareHidden;
@property (weak, nonatomic) id <WFRunWorkflowToolbarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)updatePlayButtonVisibility;
- (void)addTapped;
- (void)playTapped;
- (void)stopTapped;
- (void)shareTapped;
- (void)updateBarButtonItems;
- (_Bool)isNotRunningAndIsEditing;
- (void)updateShareButtonVisibility;
- (void)updateUndoItems;
- (void)undoTapped;
- (void)redoTapped;

@end
