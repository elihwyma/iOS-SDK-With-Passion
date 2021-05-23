/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <EKEventEditViewController.h>

@class ADAdSpace, ADHomeButtonHandler;

@interface ADEventEditViewController : EKEventEditViewController

{
    ADAdSpace *_adSpace;
    ADHomeButtonHandler *_homeButtonHandler;
    id _notificationObserver;
}

@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (retain, nonatomic) id notificationObserver;
@property (retain, nonatomic) ADAdSpace *adSpace;

- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)cancelAndDismiss;

@end
