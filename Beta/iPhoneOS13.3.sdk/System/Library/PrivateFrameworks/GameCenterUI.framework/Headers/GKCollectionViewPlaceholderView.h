/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKPlaceholderContentStateMachine, GKPlaceholderView, NSArray, NSString, UIActivityIndicatorView;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView

{
    GKPlaceholderView *_placeholderView;
    NSString *_noContentTitle;
    NSString *_noContentMessage;
    NSString *_noContentButtonTitle;
    id _noContentButtonTarget;
    SEL _noContentButtonAction;
    NSString *_errorTitle;
    NSString *_errorMessage;
    long long _alignment;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    NSArray *_cachedConstraints;
}

@property (retain, nonatomic) GKPlaceholderView *placeholderView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) GKPlaceholderContentStateMachine *loadingMachine;
@property (retain, nonatomic) NSArray *cachedConstraints;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) NSString *noContentTitle;
@property (retain, nonatomic) NSString *noContentMessage;
@property (retain, nonatomic) NSString *noContentButtonTitle;
@property (nonatomic) id noContentButtonTarget;
@property (nonatomic) SEL noContentButtonAction;
@property (retain, nonatomic) NSString *errorTitle;
@property (retain, nonatomic) NSString *errorMessage;
@property (nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)buttonPressed;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterNoContentState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didExitErrorState;
- (void)delayedShowLoadingIndicator;

@end
