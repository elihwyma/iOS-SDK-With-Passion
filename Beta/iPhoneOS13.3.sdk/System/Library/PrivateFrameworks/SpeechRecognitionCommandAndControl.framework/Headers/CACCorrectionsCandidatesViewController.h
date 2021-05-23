/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class CACCorrectionsCandidateState, NSArray, NSString, TIKeyboardCandidateSingle, TUICandidateView, UILabel, UIView;

@protocol CACCCorrectionsCandidatesViewControllerDelegate;

@interface CACCorrectionsCandidatesViewController : UIViewController

{
    id <CACCCorrectionsCandidatesViewControllerDelegate> _delegate;
    NSString *_text;
    NSArray *_alternatives;
    NSArray *_emojis;
    UILabel *_titleLabel;
    TUICandidateView *_candidateView;
    TUICandidateView *_secondaryCandidateView;
    UIView *_candidateBackdropView;
    CACCorrectionsCandidateState *_candidateConfiguration;
    TIKeyboardCandidateSingle *_originalTextCandidate;
    NSArray *_allCandidates;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TUICandidateView *candidateView;
@property (retain, nonatomic) TUICandidateView *secondaryCandidateView;
@property (retain, nonatomic) UIView *candidateBackdropView;
@property (retain, nonatomic) CACCorrectionsCandidateState *candidateConfiguration;
@property (retain, nonatomic) TIKeyboardCandidateSingle *originalTextCandidate;
@property (retain, nonatomic) NSArray *allCandidates;
@property (weak, nonatomic) id <CACCCorrectionsCandidatesViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (id)candidateResultSet;
- (void)updateConfigurations;
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4;
- (void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2;
- (void)candidateViewDidTapArrowButton:(id)arg1;
- (void)candidateViewWillBeginDragging:(id)arg1;
- (void)candidateViewNeedsToExpand:(id)arg1;
- (void)closeButtonTapped;
- (void)setupConfigurations;
- (id)newCandidateKeyWithFrame:(struct CGRect)arg1;
- (void)updateCandidateSet;

@end
