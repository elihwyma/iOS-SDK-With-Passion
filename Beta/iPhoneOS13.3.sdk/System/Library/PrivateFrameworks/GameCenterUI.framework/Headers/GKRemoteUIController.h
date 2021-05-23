/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKLocalPlayer, NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSString, NSURL, RUILoader, UINavigationController;

@interface GKRemoteUIController : NSObject

{
    _Bool _loading;
    _Bool _shouldApplyGameCenterTheme;
    _Bool _previousUseCustomBackButtonActionValue;
    _Bool _loadingInitialUI;
    _Bool _complete;
    _Bool _isServerAuthenticated;
    int _layoutStyle;
    UINavigationController *_navigationControllerWeak;
    NSString *_appleID;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    NSMutableArray *_objectModels;
    NSArray *_staticViewControllers;
    RUILoader *_loader;
    GKRemoteUIController *_presentedRemoteUIController;
    NSURL *_url;
    CDUnknownBlockType _loadHandler;
    NSDictionary *_authInfo;
    NSString *_authToken;
    NSData *_pushToken;
    NSString *_altDSID;
    NSString *_playerID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_alias;
    GKLocalPlayer *_playerForRemoteUI;
}

@property (retain, nonatomic) NSMutableArray *objectModels;
@property (nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSArray *staticViewControllers;
@property (retain, nonatomic) RUILoader *loader;
@property (retain, nonatomic) GKRemoteUIController *presentedRemoteUIController;
@property (nonatomic) _Bool previousUseCustomBackButtonActionValue;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool loading;
@property (nonatomic) _Bool loadingInitialUI;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) CDUnknownBlockType loadHandler;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic) int layoutStyle;
@property (nonatomic) _Bool complete;
@property (retain, nonatomic) NSDictionary *authInfo;
@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (retain, nonatomic) NSString *authToken;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *alias;
@property (nonatomic) _Bool isServerAuthenticated;
@property (retain, nonatomic) GKLocalPlayer *playerForRemoteUI;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool shouldApplyGameCenterTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)remoteUIController;

- (id)init;
- (id)viewControllers;
- (void)finishLoadingWithError:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (id)viewControllerForAlertPresentation;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
- (void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;
- (Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;
- (Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;
- (id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;
- (id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;
- (_Bool)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(_Bool)arg3;
- (void)pushObjectModel:(id)arg1 animated:(_Bool)arg2;
- (void)popObjectModelAnimated:(_Bool)arg1;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (id)initWithObjectModel:(id)arg1;
- (void)fireCompletionHandler;
- (void)configureFromBagKey:(id)arg1 player:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)loadInitialRemoteUIForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateAccountAndMarkComplete:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)postBodyForInitialLoad;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;
- (void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)presentInParentNavigationController:(id)arg1 animated:(_Bool)arg2;
- (void)loadInitialRemoteUIWithHandler:(CDUnknownBlockType)arg1;
- (int)preferredLayoutStyle;
- (void)loadURL:(id)arg1 forPlayer:(id)arg2 postBody:(id)arg3;
- (id)postbackDataForDictionary:(id)arg1;
- (void)loadURL:(id)arg1 forPlayer:(id)arg2 postData:(id)arg3;
- (void)loadURL:(id)arg1 postData:(id)arg2;
- (void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3;
- (long long)indexOfVisiblePage;
- (void)replaceObjectModelAtIndex:(unsigned long long)arg1 withObjectObjectModel:(id)arg2;
- (void)presentObjectModel:(id)arg1 animated:(_Bool)arg2;
- (void)performAction:(unsigned long long)arg1 withObjectModel:(id)arg2;
- (id)addThemeInfoToAttributes:(id)arg1;

@end
