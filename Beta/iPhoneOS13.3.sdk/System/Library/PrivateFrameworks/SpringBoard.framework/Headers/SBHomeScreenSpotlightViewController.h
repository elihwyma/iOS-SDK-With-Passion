/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@class FBDisplayLayoutElement;

@protocol SBHomeScreenSpotlightDismissalDelegate;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController

{
    id <SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
    FBDisplayLayoutElement *_displayLayoutElement;
}

@property (weak, nonatomic, readonly) id <SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;
@property (nonatomic, readonly) FBDisplayLayoutElement *displayLayoutElement;

- (unsigned long long)level;
- (id)initWithDelegate:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (unsigned long long)remoteSearchViewPresentationSource;

@end
