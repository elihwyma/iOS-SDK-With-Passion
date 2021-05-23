/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol CACSimpleContentViewManagerDelegate, CACViewController;

@interface CACSimpleContentViewManager : NSObject

{
    id <CACSimpleContentViewManagerDelegate> _contentViewManagerDelegate;
    UIViewController<CACViewController> *_viewController;
    long long _pendingDimmingTransactionID;
    long long _activeDimmingTransactionID;
}

@property (retain, nonatomic) UIViewController<CACViewController> *viewController;
@property (weak, nonatomic) id <CACSimpleContentViewManagerDelegate> contentViewManagerDelegate;
@property long long pendingDimmingTransactionID;
@property long long activeDimmingTransactionID;

- (void)hide;
- (_Bool)isShowing;
- (_Bool)isOverlay;
- (_Bool)isOutOfProcess;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showViewControllerWithCreationHandler:(CDUnknownBlockType)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (void)_hideAnimated:(_Bool)arg1;
- (void)hideWithoutAnimation;

@end
