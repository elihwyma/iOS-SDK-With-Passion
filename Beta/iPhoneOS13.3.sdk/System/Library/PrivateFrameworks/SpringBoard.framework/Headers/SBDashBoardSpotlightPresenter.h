/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSCoverSheetViewController, CSPageViewController, NSString, SBDashBoardSpotlightViewController;

@protocol SBFLegibilitySettingsProvider;

@interface SBDashBoardSpotlightPresenter : NSObject <Swift>

{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardSpotlightViewController *_spotlightViewController;
    id <SBFLegibilitySettingsProvider> _spotlightLegibilitySettingsProvider;
    CSPageViewController *_todayPageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) CSPageViewController *todayPageViewController;

- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)dismissSearchView;
- (void)launchSpotlightForSourceViewController:(id)arg1 interactive:(_Bool)arg2;
- (id)createSpotlightLegiblitySettingsProvider;
- (void)dismissSpotlightWithCompletion:(CDUnknownBlockType)arg1;
- (void)launchSpotlightForSourceViewController:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCoverSheetViewController:(id)arg1;
- (void)dismissSpotlight;

@end
