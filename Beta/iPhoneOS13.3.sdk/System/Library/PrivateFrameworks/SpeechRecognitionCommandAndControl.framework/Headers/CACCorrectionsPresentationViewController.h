/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class CACCorrectionsCandidatesViewController, CACPopoverPresentingViewController, NSArray, NSString;

@protocol CACCorrectionsPresentationDelegate;

@interface CACCorrectionsPresentationViewController : UIViewController

{
    id <CACCorrectionsPresentationDelegate> _delegate;
    NSString *_text;
    NSArray *_alternatives;
    NSArray *_emojis;
    CACPopoverPresentingViewController *_popoverPresentingViewController;
    CACCorrectionsCandidatesViewController *_correctionViewController;
    struct CGRect _portraitUpSourceRect;
}

@property (retain, nonatomic) CACPopoverPresentingViewController *popoverPresentingViewController;
@property (retain, nonatomic) CACCorrectionsCandidatesViewController *correctionViewController;
@property (weak, nonatomic) id <CACCorrectionsPresentationDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;
@property (nonatomic) struct CGRect portraitUpSourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

- (id)init;
- (_Bool)_canShowWhileLocked;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismissCorrectionsCandidatesViewController:(id)arg1;
- (void)correctionsCandidatesViewController:(id)arg1 didSelectItemWithText:(id)arg2;

@end
