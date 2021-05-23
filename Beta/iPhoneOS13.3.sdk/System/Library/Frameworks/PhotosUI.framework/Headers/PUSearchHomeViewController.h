/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetUIViewController.h>

@class NSString, PUSearchHomeGadgetDataSourceManager, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;

@interface PUSearchHomeViewController : PXGadgetUIViewController

{
    UIBarButtonItem *_navigationDisplayModeButtonItem;
    PUSearchHomeGadgetDataSourceManager *_searchHomeDataSourceManager;
}

@property (retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *navigationTitle;
@property (nonatomic, readonly) NSString *navigationIdentifier;
@property (retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *navigationListDataSourceManager;

+ (Class)gadgetSpecClass;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (long long)scrollAnimationIdentifier;
- (id)px_gridPresentation;
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;
- (_Bool)shouldPreventPlaceholder;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;
- (void)_configureSearchNavigationBar;
- (void)_activateSearchField;
- (void)_clearSearchField;
- (void)selectZeroKeyword:(id)arg1;
- (void)performRecentSearch:(id)arg1;
- (void)presentSiriSearchRequest:(id)arg1 resultCount:(unsigned long long)arg2;
- (void)presentOneYearAgo;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)arg1;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ppt_prepareForSearchTest:(CDUnknownBlockType)arg1;
- (void)ppt_dismissKeyboard;

@end
