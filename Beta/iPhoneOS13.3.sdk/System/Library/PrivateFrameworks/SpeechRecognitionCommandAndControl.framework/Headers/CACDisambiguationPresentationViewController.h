/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIAlertController;

@protocol CACContactDisambiguationPresentationViewControllerDelegate;

@interface CACDisambiguationPresentationViewController : UIViewController

{
    NSArray *_disambiguationItems;
    id <CACContactDisambiguationPresentationViewControllerDelegate> _contactDisambiguationDelegate;
    NSString *_alertTitle;
    UIAlertController *_alertController;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id <CACContactDisambiguationPresentationViewControllerDelegate> contactDisambiguationDelegate;
@property (retain, nonatomic) NSArray *disambiguationItems;
@property (nonatomic, readonly) NSString *alertTitle;
@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (id)initWithTitle:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)actionForItem:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)performHideWithCompletion:(CDUnknownBlockType)arg1;
- (id)newAlertControllerWithTitle:(id)arg1 message:(id)arg2;
- (id)newActionCustomContentView:(id)arg1;

@end
