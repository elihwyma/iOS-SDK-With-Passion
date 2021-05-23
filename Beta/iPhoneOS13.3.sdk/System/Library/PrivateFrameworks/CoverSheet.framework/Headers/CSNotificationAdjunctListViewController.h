/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSAdjunctListModel, CSContentActionInterpreter, CSNowPlayingController, NSMutableArray, NSMutableDictionary, NSString, UIStackView;

@protocol CSNotificationAdjunctListViewControllerDelegate, SBFActionProviding;

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase

{
    CSAdjunctListModel *_model;
    _Bool _respondingToSubviewLayoutChange;
    id <CSNotificationAdjunctListViewControllerDelegate> _delegate;
    UIStackView *_stackView;
    NSMutableDictionary *_identifiersToItems;
    NSMutableArray *_dismissingItems;
    CSNowPlayingController *_nowPlayingController;
    CSContentActionInterpreter *_actionInterpreter;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableDictionary *identifiersToItems;
@property (retain, nonatomic) NSMutableArray *dismissingItems;
@property (retain, nonatomic) CSNowPlayingController *nowPlayingController;
@property (retain, nonatomic) CSContentActionInterpreter *actionInterpreter;
@property (nonatomic) _Bool respondingToSubviewLayoutChange;
@property (nonatomic, readonly, getter=isPresentingContent) _Bool presentingContent;
@property (nonatomic, readonly, getter=isShowingMediaControls) _Bool showingMediaControls;
@property (weak, nonatomic) id <SBFActionProviding> contentActionProvider;
@property (weak, nonatomic) id <CSNotificationAdjunctListViewControllerDelegate> delegate;
@property (nonatomic, readonly) double listViewContentAnimationDuration;
@property (nonatomic, readonly) double listViewContentAnimationDampingRatio;
@property (nonatomic, readonly) struct CGSize sizeToMimic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)handleEvent:(id)arg1;
- (id)_groupNameBase;
- (_Bool)_canAnimate;
- (void)_didUpdateDisplay;
- (void)_insertItem:(id)arg1 animated:(_Bool)arg2;
- (void)_removeItem:(id)arg1 animated:(_Bool)arg2;
- (id)_createPlatterForHost:(id)arg1 recipe:(long long)arg2;
- (struct CGAffineTransform)_disappearedTransformForContentWithHeight:(double)arg1;
- (void)adjunctListModel:(id)arg1 didAddItem:(id)arg2;
- (void)adjunctListModel:(id)arg1 didRemoveItem:(id)arg2;

@end
