/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class MPMediaItem, MPPlaybackContext, NSArray, NSString, NSURL, UIViewController, VideosExtrasRootViewController;

@protocol VideosExtrasContextDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasContext : NSObject <Swift>

{
    _Bool _isStarted;
    id <VideosExtrasContextDelegate> _delegate;
    UIViewController *_featurePlaybackViewController;
    MPPlaybackContext *_featurePlaybackContext;
    VideosExtrasRootViewController *_extrasRootViewController;
    MPMediaItem *_mediaItem;
    NSURL *_javascriptURL;
    NSString *_buyParameters;
    long long _storeID;
    unsigned long long _selectedMainMenuIndex;
}

@property (nonatomic) _Bool isStarted;
@property (weak, nonatomic) id <VideosExtrasContextDelegate> delegate;
@property (retain, nonatomic) UIViewController *featurePlaybackViewController;
@property (retain, nonatomic) MPPlaybackContext *featurePlaybackContext;
@property (nonatomic, readonly) VideosExtrasRootViewController *extrasRootViewController;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (copy, nonatomic, readonly) NSURL *javascriptURL;
@property (copy, nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) long long storeID;
@property (nonatomic) _Bool showsBuiltInNavigationControls;
@property (nonatomic) _Bool showsMenuBar;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (nonatomic) unsigned long long selectedMainMenuIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)extrasRootViewControllerClass;
+ (id)overriddenJavascriptURL;
+ (void)overrideJavascriptURL:(id)arg1;

- (id)init;
- (void)failWithError:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(_Bool)arg2;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (_Bool)shouldExtrasBeVisibleForSize:(struct CGSize)arg1;
- (id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3;
- (_Bool)isMenuItemElementMainFeature:(id)arg1;
- (void)setClearsStackOnNextPush;
- (void)startIfNecessary;
- (void)extrasRequestsPlaybackStop;
- (void)extrasDoneButtonPressed;
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)extrasBackButtonPressed;
- (void)extrasRootViewControllerDidLoadMainMenuItems:(id)arg1;
- (void)extrasRootViewController:(id)arg1 extrasVisibilityNeedsUpdate:(_Bool)arg2;
- (void)_configureForMediaItem:(id)arg1;
- (void)clearNavStack;

@end
