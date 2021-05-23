/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString, PHFetchResult, UITableView;

@interface PXSeenAssetSettingsViewController : UIViewController

{
    UITableView *_tableView;
    PHFetchResult *_fetchResult;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_suggestedSeenFetchOptions;
- (void)_fetchSeenAssetsAndReload:(_Bool)arg1;
- (long long)_recommendedVariationTypeForAsset:(id)arg1;
- (void)_presentConfirmationForAssetAtIndexPath:(id)arg1;
- (void)_markVariationsAsUnseenForAssetAtIndexPath:(id)arg1;

@end
