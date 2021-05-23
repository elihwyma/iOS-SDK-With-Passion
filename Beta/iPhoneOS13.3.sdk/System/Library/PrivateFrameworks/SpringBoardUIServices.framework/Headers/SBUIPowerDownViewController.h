/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@class NSString;

@protocol SBUIPowerDownViewControllerDelegate;

@interface SBUIPowerDownViewController : UIViewController

{
    id <SBUIPowerDownViewControllerDelegate> powerDownDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBUIPowerDownViewControllerDelegate> powerDownDelegate;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewWillAnimateIn:(id)arg1;
- (void)powerDownViewWillAnimateOut:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (id)_powerDownView;

@end
