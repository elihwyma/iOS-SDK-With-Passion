/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@protocol TSKUIAlertProtocol;

@interface TSKAbstractAlert : NSObject

{
    long long _result;
    id _context;
    id <TSKUIAlertProtocol> _delegate;
    _Bool _isDelegateRetained;
    _Bool _cancelOnEnterBackground;
    _Bool _inBackground;
    _Bool _clickedButtonAtIndex;
    _Bool _didDismissWithButtonIndex;
    _Bool _willDismissWithButtonIndex;
    _Bool _didPresentAlertView;
    _Bool _willPresentAlertView;
    CDUnknownBlockType _clickedBlock;
    CDUnknownBlockType _dismissedBlock;
    id <TSKUIAlertProtocol> _retainedDelegate;
}

@property (retain, nonatomic) id <TSKUIAlertProtocol> retainedDelegate;
@property (retain, nonatomic) id context;
@property (nonatomic) id <TSKUIAlertProtocol> delegate;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) _Bool cancelOnEnterBackground;
@property (nonatomic, readonly) _Bool inBackground;

- (id)init;
- (void)dealloc;
- (long long)result;
- (long long)addButtonWithTitle:(id)arg1;
- (long long)firstOtherButtonIndex;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)numberOfButtons;
- (void)show;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)enterBackground;
- (void)showAlert;
- (void)didDismissWithButtonIndex:(long long)arg1;
- (void)clickedButtonAtIndex:(long long)arg1;
- (void)showWithDelegate:(id)arg1 context:(id)arg2;
- (void)showWithClickedButtonBlock:(CDUnknownBlockType)arg1;
- (void)showWithDismissedByButtonBlock:(CDUnknownBlockType)arg1;
- (long long)showSynchronously;
- (void)willDismissWithButtonIndex:(long long)arg1;
- (void)_didPresentAlertView:(id)arg1;
- (void)willPresentAlertView;

@end
