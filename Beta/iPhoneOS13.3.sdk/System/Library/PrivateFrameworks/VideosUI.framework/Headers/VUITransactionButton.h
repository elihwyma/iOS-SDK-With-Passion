/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIButton.h>

@class NSString, VUICircularProgress;

__attribute__((visibility("hidden")))
@interface VUITransactionButton : VUIButton

{
    _Bool _waitingForTransactionToStart;
    _Bool _monitorTransaction;
    VUICircularProgress *_progressIndicator;
    NSString *_textContentTitleBackup;
}

@property (nonatomic, getter=isWaitingForTransactionToStart) _Bool waitingForTransactionToStart;
@property (nonatomic) _Bool monitorTransaction;
@property (retain, nonatomic) VUICircularProgress *progressIndicator;
@property (copy, nonatomic) NSString *textContentTitleBackup;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (id)_carouselView;
- (void)updateWithElement:(id)arg1;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;
- (void)_buttonTapped:(id)arg1 eventName:(id)arg2;
- (void)_unregisterTransactionNotifications;
- (void)_layoutProgressIndicatorIfNeeded;
- (id)_transactionBuyParams;
- (void)_handleTransactionDidStartNotification:(id)arg1;
- (void)_updateProgressIndicatorTintColor:(id)arg1;
- (void)_addProgressIndicatorWithFrame:(struct CGRect)arg1;
- (void)_registerForTransactionNotification;
- (void)_handleTransactionDidFinishNotification:(id)arg1;

@end
