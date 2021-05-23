/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class CPSTemplateBannerController, NSArray, NSString, SBCarBannerNotificationView, SBStarkAlertItemBannerSource, SBStarkBannerCell, SBStarkBannerTarget, SBStarkNotificationBannerSource, SBStarkNotificationLayout, SBStarkNotificationSystemGestureManager, SBUIBannerContext, UISwipeGestureRecognizer, UITapGestureRecognizer;

@protocol SBStarkNotificationViewControllerDelegate, SBStarkNotificationsConfiguring;

@interface SBStarkNotificationViewController : UIViewController <Swift>

{
    id <SBStarkNotificationsConfiguring> _configuration;
    SBStarkNotificationSystemGestureManager *_systemGestureManager;
    _Bool _dismissingForSystemGesture;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    SBStarkBannerTarget *_bannerTarget;
    SBStarkAlertItemBannerSource *_alertItemBannerSource;
    SBStarkNotificationBannerSource *_notificationBannerSource;
    CPSTemplateBannerController *_templateBannerController;
    SBUIBannerContext *_currentContext;
    NSArray *_currentSubActionLabels;
    SBStarkBannerCell *_currentCell;
    int _state;
    SBStarkNotificationLayout *_notificationsLayout;
    SBCarBannerNotificationView *_notificationsView;
    UITapGestureRecognizer *_cancelNotificationTapGestureRecognizer;
    UISwipeGestureRecognizer *_dismissNotificationTouchpadSwipeGestureRecognizer;
    _Bool _invalid;
    id <SBStarkNotificationViewControllerDelegate> _delegate;
}

@property (nonatomic, setter=_setState:) int state;
@property (weak, nonatomic) id <SBStarkNotificationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_performBackGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_performSwipeGesture:(id)arg1;
- (void)setSuspensionReasons:(unsigned long long)arg1 cancellingCurrent:(_Bool)arg2;
- (void)_performCancelNotificationTapGesture:(id)arg1;
- (void)starkBannerTarget:(id)arg1 didChangeContextWithDismissReason:(int)arg2;
- (id)initWithConfiguration:(id)arg1 systemGestureManager:(id)arg2;
- (_Bool)handleMenuEvent;
- (id)_notificationBannerSource;

@end
