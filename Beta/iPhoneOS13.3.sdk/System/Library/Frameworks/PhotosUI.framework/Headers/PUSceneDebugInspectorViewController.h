/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary, NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorViewController : UITableViewController

{
    UIView *_loadingContentView;
    UIBarButtonItem *_sortButton;
    UIBarButtonItem *_shareButton;
    NSArray *_sceneViewModelsAll;
    NSArray *_sceneViewModelsSearched;
    NSDictionary *_groupedSceneViewModels;
    NSArray *_groupedSceneViewModelTitles;
}

@property (nonatomic, readonly) NSArray *currentSceneViewModels;
@property (copy, nonatomic) NSArray *sceneViewModelsAll;
@property (copy, nonatomic) NSArray *sceneViewModelsSearched;
@property (copy, nonatomic) NSDictionary *groupedSceneViewModels;
@property (copy, nonatomic) NSArray *groupedSceneViewModelTitles;
@property (nonatomic, readonly) UIView *loadingContentView;
@property (nonatomic, readonly) UIBarButtonItem *sortButton;
@property (nonatomic, readonly) UIBarButtonItem *shareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_commaSeparatedValueRepresentation:(id)arg1;
+ (_Bool)_isAscendingForSortOrder:(unsigned long long)arg1;
+ (id)_sortedSceneViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)_sectionTitleForSceneViewModel:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)_titleForSortOrder:(unsigned long long)arg1;
+ (id)_assetGridViewControllerForViewModel:(id)arg1 interfaceIdiom:(long long)arg2;
+ (id)_shortTitlesForSectionTitles:(id)arg1 SortOrder:(unsigned long long)arg2;
+ (id)_keyForSortOrder:(unsigned long long)arg1;
+ (id)highestConfidenceForAsset:(id)arg1 sceneIdentifier:(id)arg2;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didSelectSortButton:(id)arg1;
- (void)didSelectDoneButton:(id)arg1;
- (void)_reloadTableViewByGroupingViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;
- (void)didSelectShareButton:(id)arg1;

@end
