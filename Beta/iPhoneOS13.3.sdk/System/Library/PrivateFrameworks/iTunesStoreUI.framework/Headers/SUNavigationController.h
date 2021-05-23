/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UINavigationController.h>

@class NSString, SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController

{
    _Bool _canBeWeakScriptReference;
    SUClientInterface *_clientInterface;
    SUSection *_section;
    long long _storeBarStyle;
    _Bool _skLoading;
}

@property (nonatomic, getter=isSkLoading) _Bool skLoading;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (retain, nonatomic) SUSection *section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithSection:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (void)setViewControllers:(id)arg1;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolbarHidden:(_Bool)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (long long)ITunesStoreUIBarStyle;
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;
- (id)copyArchivableContext;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (void)restoreArchivableContext:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (_Bool)clearsWeakScriptReferences;
- (void)_loadingDidChangeNotification:(id)arg1;
- (id)copyScriptViewController;

@end
