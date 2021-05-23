/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, NSURL, SUGradient, SUPlaceholderViewController, SUShadow, SUSplitView, SUStructuredPage, UIViewController;

@interface SUSplitViewController : SUViewController

{
    NSURL *_displayedURL;
    UIViewController *_firstViewController;
    NSString *_mainTitle;
    SUGradient *_placeholderGradient;
    SUPlaceholderViewController *_placeholderViewController;
    UIViewController *_secondViewController;
    SUShadow *_splitShadow;
    SUSplitView *_splitView;
    SUStructuredPage *_structuredPage;
    _Bool _usesSharedPlaceholder;
    _Bool _viewIsReady;
}

@property (retain, nonatomic) NSURL *displayedURL;
@property (nonatomic) _Bool viewIsReady;
@property (retain, nonatomic) UIViewController *firstViewController;
@property (retain, nonatomic) UIViewController *secondViewController;
@property (retain, nonatomic) NSString *mainTitle;
@property (nonatomic) long long layoutType;
@property (nonatomic) double minimumPaneSize;
@property (nonatomic) double splitPosition;
@property (copy, nonatomic) SUShadow *splitShadow;
@property (nonatomic) _Bool usesSharedPlaceholder;
@property (nonatomic, getter=isVertical) _Bool vertical;

+ (_Bool)isValidSplitPositionValue:(id)arg1;
+ (_Bool)isValidSplitTypeString:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)addChildViewController:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)_reloadTitle;
- (void)setSkLoading:(_Bool)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (_Bool)isSkLoaded;
- (void)_reloadView;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (_Bool)shouldExcludeFromNavigationHistory;
- (id)storePageProtocol;
- (id)newRotationController;
- (void)_loadingDidChangeNotification:(id)arg1;
- (id)copyScriptViewController;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)_navigationItemDidChangeNotification:(id)arg1;
- (id)_splitView;
- (void)_setPlaceholderVisible:(_Bool)arg1;
- (void)_setStructuredPage:(id)arg1;
- (void)_reloadWithStorePageDictionary:(id)arg1;
- (void)_setViewController:(id *)arg1 toValue:(id)arg2;
- (void)_reloadLoadingState;
- (id)_newGradientWithValue:(id)arg1;
- (void)setSplitPositionAndLayoutTypeFromValue:(id)arg1;
- (void)setSplitTypeString:(id)arg1;
- (id)_newViewControllerFromDictionary:(id)arg1;
- (void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2;
- (id)splitPositionString;
- (id)splitTypeString;

@end
