/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, RUIAlertView, RUIElement, RUIPage, RUIStyle;

@protocol RUIObjectModelDelegate;

@interface RUIObjectModel : NSObject

{
    NSString *_name;
    NSURL *_sourceURL;
    NSURL *_scriptURL;
    NSString *_inlineScript;
    NSString *_validationFunction;
    NSMutableArray *_defaultPages;
    NSMutableDictionary *_namedPages;
    NSMutableArray *_displayedPages;
    int _currentPage;
    struct OpaqueJSContext *_ctx;
    NSDictionary *_clientInfo;
    NSDictionary *_serverInfo;
    NSDictionary *_updateInfo;
    int _refreshDelay;
    NSString *_refreshURL;
    NSTimer *_refreshTimer;
    long long _nextButtonStyle;
    RUIAlertView *_primaryAlert;
    NSMutableDictionary *_namedAlerts;
    NSMutableDictionary *_httpHeaders;
    NSString *_authPasswordEquivalent;
    NSString *_authPasswordFieldID;
    _Bool _parseFinished;
    CDUnknownBlockType _webViewDoneHandler;
    RUIElement *_activeElement;
    id <RUIObjectModelDelegate> _delegate;
    NSString *_identifier;
    RUIStyle *_style;
    NSString *_identifierMarkingStackRemovalAfterPush;
    NSDictionary *_alert;
}

@property (weak, nonatomic) id <RUIObjectModelDelegate> delegate;
@property (nonatomic, readonly) NSArray *displayedPages;
@property (nonatomic, readonly) NSArray *defaultPages;
@property (nonatomic, readonly) NSDictionary *namedPages;
@property (nonatomic, readonly) NSArray *allPages;
@property (nonatomic, readonly) RUIPage *visiblePage;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *scriptURL;
@property (copy, nonatomic) NSString *inlineScript;
@property (copy, nonatomic) NSString *validationFunction;
@property (copy, nonatomic) NSDictionary *clientInfo;
@property (copy, nonatomic) NSDictionary *serverInfo;
@property (copy, nonatomic) NSDictionary *updateInfo;
@property (nonatomic) int refreshDelay;
@property (copy, nonatomic) NSString *refreshURL;
@property (nonatomic) long long nextButtonStyle;
@property (retain, nonatomic) RUIStyle *style;
@property (nonatomic, readonly) RUIAlertView *primaryAlert;
@property (copy, nonatomic) NSString *identifierMarkingStackRemovalAfterPush;
@property (nonatomic, readonly) NSArray *pages;
@property (retain, nonatomic) NSDictionary *alert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_enableTestMode;
+ (id)objectModelForXMLNamed:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)alertController;
- (id)_parentViewController;
- (_Bool)goBack:(_Bool)arg1;
- (_Bool)goBack;
- (id)absoluteURLWithString:(id)arg1;
- (void)activateElement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)RUIPage:(id)arg1 toggledEditing:(_Bool)arg2;
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;
- (void)tableViewOMDidChange:(id)arg1;
- (id)subElementWithID:(id)arg1;
- (void)cleanupRefreshTimer;
- (void)pageDidDisappear:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)arg1;
- (id)elementsWithName:(id)arg1;
- (id)postbackDictionary;
- (id)rowForFormField:(id)arg1;
- (void)openLink:(id)arg1 HTTPMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showModalWebViewWithLinkURL:(id)arg1 scaleToFit:(_Bool)arg2 loadCompletion:(CDUnknownBlockType)arg3 doneHandler:(CDUnknownBlockType)arg4;
- (void)setJSGlobalContext:(struct OpaqueJSContext *)arg1;
- (void)_navigateToNextPageAnimated;
- (void)back:(id)arg1;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_populatePageNavItem:(id)arg1 withNextButton:(_Bool)arg2;
- (void)refreshTimeout;
- (id)_firstPageForPresentation;
- (void)presentPage:(id)arg1 inViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentInParentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(_Bool)arg1;
- (void)_navigateBackWithPop:(_Bool)arg1 fromViewController:(id)arg2;
- (id)_parentNavigationController;
- (void)_unsafe_setPages:(id)arg1;
- (void)navigateToNextPageAnimated:(_Bool)arg1;
- (void)_displayNamedPage:(id)arg1 animated:(_Bool)arg2;
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1;
- (id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2;
- (_Bool)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;
- (_Bool)hasConfirmationAttributes:(id)arg1;
- (_Bool)hasSecondConfirmationAttributes:(id)arg1;
- (void)_presentSecondConfirmationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentConfirmationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;
- (id)textInRowWithIdentifier:(id)arg1;
- (void)handleElementChange:(id)arg1 action:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleElementChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAppleIDAuthenticationIfNeededForAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentConfirmationIfNeededForElement:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldDisplayNamedElement:(id)arg1 page:(id)arg2;
- (_Bool)validateWithFunction:(id)arg1;
- (id)_pageContainingTableView:(id)arg1;
- (void)remoteUIWebViewControllerDonePressed:(id)arg1;
- (_Bool)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;
- (void)tableViewOMSubmitForm:(id)arg1;
- (void)tableViewOM:(id)arg1 elementDidChange:(id)arg2 action:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)passcodeViewOM:(id)arg1 activatedElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)alertView:(id)arg1 pressedButton:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)parseDidFinish;
- (void)presentWithBlock:(CDUnknownBlockType)arg1;
- (void)presentInParentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)newNavigationControllerForPresentation;
- (void)_displaySupplementalPage:(id)arg1;
- (void)didNavigateBackFromViewController:(id)arg1;
- (id)postbackData;
- (void)_populateRequest:(id)arg1;
- (void)refreshWithObjectModel:(id)arg1;
- (void)setPages:(id)arg1;
- (void)addAlertElement:(id)arg1;
- (void)configureTableView:(id)arg1;
- (void)configureRow:(id)arg1;
- (void)configureSection:(id)arg1;
- (Class)customHeaderClassForSection:(id)arg1;
- (Class)customFooterClassForSection:(id)arg1;
- (Class)customTableCellClassForTableViewRow:(id)arg1;
- (id)tableHeaderViewForAttributes:(id)arg1;
- (id)tableFooterViewForAttributes:(id)arg1;
- (id)relativeURLWithString:(id)arg1;
- (void)startNavigationBarSpinnerWithTitle:(id)arg1;
- (void)stopNavigationBarSpinner;
- (void)runScript;
- (_Bool)prepareScriptContext;
- (void)_logException:(struct OpaqueJSValue *)arg1;
- (id)objectForJSValue:(struct OpaqueJSValue *)arg1;

@end
