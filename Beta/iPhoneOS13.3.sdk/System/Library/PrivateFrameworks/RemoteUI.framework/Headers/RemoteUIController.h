/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURLSessionConfiguration, NSUUID, RUILoader, RUINavigationController, RUIPage, RUIStyle, UINavigationController, UIViewController;

@protocol RemoteUIControllerDelegate;

@interface RemoteUIController : NSObject

{
    RUINavigationController *_modalNavigationController;
    NSMutableArray *_objectModels;
    NSMutableArray *_modalObjectModels;
    NSMutableDictionary *_elementChangeHandlers;
    RUIPage *_pageOriginatingLoad;
    NSString *_listeningForSMSIdentifier;
    NSString *_SMSAutoFillToken;
    _Bool _testMode;
    UIViewController *_hostViewController;
    RUILoader *_loader;
    NSString *_userAgentString;
    id <RemoteUIControllerDelegate> _delegate;
    CDUnknownBlockType _loadCompletion;
    NSURLSessionConfiguration *_sessionConfiguration;
    RUIStyle *_style;
    NSUUID *_UUID;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) RUILoader *loader;
@property (copy, nonatomic) NSString *userAgentString;
@property (weak, nonatomic) id <RemoteUIControllerDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType loadCompletion;
@property (copy, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) RUIStyle *style;
@property (nonatomic, readonly) NSArray *displayedPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadRequest:(id)arg1;
- (void)removeHandlerForKey:(id)arg1;
- (void)loadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dismissObjectModelsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHandlerForElementName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadData:(id)arg1 baseURL:(id)arg2;
- (_Bool)_shouldAnimate;
- (id)viewControllerForAlertPresentation;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(_Bool)arg3;
- (_Bool)objectModel:(id)arg1 shouldDisplayNamedElement:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)_enableTestMode;
- (void)_stopListeningForSMSAutoFill;
- (void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3;
- (void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_objectModel:(id)arg1 receivedToken:(id)arg2;
- (void)_didRemoveObjectModel:(id)arg1;
- (void)_willPresentObjectModel:(id)arg1 modally:(_Bool)arg2;
- (void)_removePreviousObjectModelsBackToIdentifier:(id)arg1;
- (void)_didPresentObjectModel:(id)arg1 modally:(_Bool)arg2;
- (id)_objectModelStack;
- (id)popObjectModelAnimated:(_Bool)arg1 stopListeningForHSATokens:(_Bool)arg2;
- (_Bool)_objectModelPageWantsHSATokens:(id)arg1;
- (void)pushObjectModel:(id)arg1 animated:(_Bool)arg2;
- (void)_setHandlerWithKey:(id)arg1 forElementsMatching:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
- (id)setHandlerForElementsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (void)refreshTopModelWithModel:(id)arg1;
- (void)_modalNavigationWasDismissed;
- (id)popObjectModelAnimated:(_Bool)arg1;
- (void)_replaceObjectModelWithObjectModel:(id)arg1;
- (void)_modalViewControllerWasPopped:(id)arg1;
- (void)_beginListeningForSMSAutoFill;
- (id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)loadURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (id)_objectModels;
- (id)_modalObjectModels;
- (void)setHandlerForButtonsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHandlerForButtonName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startListeningForHSATokenAutoFill;
- (void)stopListeningForHSATokenAutoFill;
- (_Bool)isListeningForHSATokenAutoFill;

@end
