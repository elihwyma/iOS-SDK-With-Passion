/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSString, TFImageFetcher, TFLaunchScreen;

@protocol TFBetaAppLaunchDataProvider, TFBetaAppLaunchPresenterView;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchPresenter : NSObject

{
    id <TFBetaAppLaunchPresenterView> _presenterView;
    NSString *_bundleIdentifier;
    id <TFBetaAppLaunchDataProvider> _launchDataProvider;
    TFImageFetcher *_imageFetcher;
    TFLaunchScreen *_launchScreen;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) id <TFBetaAppLaunchDataProvider> launchDataProvider;
@property (nonatomic, readonly) TFImageFetcher *imageFetcher;
@property (retain, nonatomic) TFLaunchScreen *launchScreen;
@property (weak, nonatomic) id <TFBetaAppLaunchPresenterView> presenterView;

- (void)update;
- (id)initForIdentifier:(id)arg1 launchDataProvider:(id)arg2 launchScreenSidepack:(id)arg3;
- (void)_showTestNotesViewWithLaunchScreen:(id)arg1;
- (void)_showLoading;
- (void)_abortLaunchScreenLoadWithError:(id)arg1;
- (void)_showHowToViewWithLaunchScreen:(id)arg1;
- (void)exitLaunchScreen;
- (void)showHowToScreen;
- (void)openHowToSupportLink;

@end
