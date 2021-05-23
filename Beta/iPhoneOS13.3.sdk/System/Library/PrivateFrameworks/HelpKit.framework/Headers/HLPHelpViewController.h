/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <UIKit/UIViewController.h>

@class HLPHelpBookController, HLPHelpLoadingView, HLPHelpLocaleController, HLPHelpTableOfContentViewController, HLPHelpTopicViewController, HLPHelpUsageController, HLPReachabilityManager, NSArray, NSDictionary, NSLayoutConstraint, NSMutableDictionary, NSString, NSURL, UIBarButtonItem, UIView;

@protocol HLPHelpViewControllerDelegate;

@interface HLPHelpViewController : UIViewController

{
    _Bool _fullBookView;
    _Bool _showingHelpTopic;
    _Bool _shouldDismissWelcomeTopic;
    NSDictionary *_context;
    NSString *_helpBookBasePath;
    NSString *_helpbookVersion;
    UIBarButtonItem *_doneBarButtonItem;
    NSLayoutConstraint *_loadingViewTopConstraint;
    UIView *_fullBookViewSeparator;
    HLPHelpUsageController *_usageController;
    HLPHelpTopicViewController *_topicViewController;
    _Bool _hideDoneButton;
    _Bool _displayHelpTopicsOnly;
    _Bool _showTopicNameAsTitle;
    _Bool _showTopicViewOnLoad;
    id <HLPHelpViewControllerDelegate> _delegate;
    NSString *_identifier;
    NSString *_version;
    NSString *_subpath;
    NSURL *_localHelpBookFileURL;
    NSString *_selectedHelpTopicID;
    NSArray *_preferredLanguagesOverride;
    NSString *_selectedHelpTopicName;
    NSMutableDictionary *_localHelpBookNameIDMap;
    NSURL *_helpBookURL;
    HLPHelpLocaleController *_localeListController;
    HLPHelpBookController *_helpBookController;
    HLPReachabilityManager *_reachabilityManager;
    HLPHelpLoadingView *_loadingView;
    HLPHelpTableOfContentViewController *_tableOfContentViewController;
}

@property (retain, nonatomic) NSMutableDictionary *localHelpBookNameIDMap;
@property (retain, nonatomic) NSURL *helpBookURL;
@property (retain, nonatomic) HLPHelpLocaleController *localeListController;
@property (retain, nonatomic) HLPHelpBookController *helpBookController;
@property (retain, nonatomic) HLPReachabilityManager *reachabilityManager;
@property (retain, nonatomic) HLPHelpLoadingView *loadingView;
@property (retain, nonatomic) HLPHelpTableOfContentViewController *tableOfContentViewController;
@property (nonatomic) _Bool hideDoneButton;
@property (nonatomic) _Bool displayHelpTopicsOnly;
@property (nonatomic) _Bool showTopicNameAsTitle;
@property (nonatomic) _Bool showTopicViewOnLoad;
@property (weak, nonatomic) id <HLPHelpViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *subpath;
@property (copy, nonatomic) NSURL *localHelpBookFileURL;
@property (copy, nonatomic) NSString *selectedHelpTopicID;
@property (copy, nonatomic) NSArray *preferredLanguagesOverride;
@property (copy, nonatomic) NSString *selectedHelpTopicName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)helpViewControllerWithIdentifier:(id)arg1 version:(id)arg2;
+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3;
+ (id)helpViewControllerWithTitle:(id)arg1 identifier:(id)arg2 version:(id)arg3 subpath:(id)arg4;
+ (void)clearCacheControllers;
+ (id)helpViewController;
+ (id)helpViewControllerWithLocalHelpBookFileURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_setContext:(id)arg1;
- (id)deviceFamily;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateDoneButton;
- (id)currentHelpTopicItemForTableOfContentViewController:(id)arg1;
- (void)tableOfContentViewControllerShowHelpBookInfo:(id)arg1;
- (void)tableOfContentViewController:(id)arg1 showHelpTopicItem:(id)arg2;
- (void)updateDarkMode;
- (void)setupFullBookView;
- (void)showHelpTopicItem:(id)arg1 anchor:(id)arg2 animate:(_Bool)arg3;
- (void)setupTableContentViewController;
- (void)updateTOCButton;
- (void)updateChildViewConstraints;
- (void)loadHelpBook;
- (void)setupTopicViewController;
- (void)showTopicView;
- (void)loadFromStaticServer;
- (void)updateLastLoadVersion;
- (void)removeDDMLoadFailVersion;
- (void)updateCacheControllerToLanguageCode:(id)arg1;
- (void)displayHelpBookWithLocale:(id)arg1;
- (void)showMessageForError:(id)arg1;
- (void)popWelcomeTopicView;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(id)arg1;
- (void)showHelpBookInfo:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewController:(id)arg1 topicLoaded:(id)arg2;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (void)helpTopicViewController:(id)arg1 selectedHelpTopicItem:(id)arg2;
- (void)reachabilityManagerConnectionStatusChanged:(id)arg1 connected:(_Bool)arg2;
- (void)_setFullBookView:(_Bool)arg1;
- (void)loadHelpTopicID:(id)arg1;
- (id)topicIDForTopicName:(id)arg1 locale:(id)arg2;

@end
