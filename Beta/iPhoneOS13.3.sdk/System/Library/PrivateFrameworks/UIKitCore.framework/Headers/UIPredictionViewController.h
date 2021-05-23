/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSDate, NSString, NSTimer, TIAutocorrectionList, TUIPredictionView;

__attribute__((visibility("hidden")))
@interface UIPredictionViewController : UIViewController

{
    NSTimer *_updateUITimer;
    NSDate *_lastUIUpdateTime;
    TUIPredictionView *_predictionView;
    TIAutocorrectionList *_cachedAutocorrectionList;
}

@property (retain, nonatomic) TIAutocorrectionList *cachedAutocorrectionList;
@property (nonatomic, readonly) TUIPredictionView *predictionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *displayedCandidates;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (_Bool)hidesExpandableButton;
- (void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2;
- (void)autocorrectionControllerDidClearAutocorrections:(id)arg1;
- (void)_registerForNotifications;
- (id)_currentTextSuggestions;
- (_Bool)_isVisibleForAutocorrectionType:(long long)arg1;
- (void)_inputModeDidChange;
- (void)_inputResponderDidChangeNotification:(id)arg1;
- (void)_registerAsAutocorrectionObserver;
- (void)_updateAutocorrectionList:(id)arg1;
- (_Bool)_autocorrectionListIsNull:(id)arg1;
- (_Bool)_autocorrectionListContainsContinuousPathConversions:(id)arg1;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg1;
- (_Bool)_autocorrectionListMayCausePredictionViewToReappear:(id)arg1;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)arg1;
- (void)predictionView:(id)arg1 didSelectCandidate:(id)arg2;

@end
