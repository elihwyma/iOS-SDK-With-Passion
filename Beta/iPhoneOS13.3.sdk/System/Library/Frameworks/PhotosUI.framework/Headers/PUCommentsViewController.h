/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAssetViewModel, PUCommentsTableDataController, UITableView;

@protocol PUAccessoryContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsViewController : UIViewController <Swift>

{
    _Bool __needsUpdateTableViewScrollPosition;
    id <PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;
    PUAssetViewModel *_assetViewModel;
    UITableView *__tableView;
    PUCommentsTableDataController *__tableDataController;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) UITableView *_tableView;
@property (nonatomic, readonly) PUCommentsTableDataController *_tableDataController;
@property (nonatomic, setter=_setNeedsUpdateTableViewScrollPosition:) _Bool _needsUpdateTableViewScrollPosition;
@property (nonatomic, readonly) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) struct CGSize minimumContentSize;

+ (_Bool)canShowCommentsForAsset:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)setContentInsets:(struct UIEdgeInsets)arg1 changeReason:(long long)arg2;
- (_Bool)contentAreaContainsPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)contentBoundsInCoordinateSpace:(id)arg1;
- (void)commentsTableDataController:(id)arg1 didChangeEditing:(_Bool)arg2;
- (void)commentsTableDataController:(id)arg1 tableViewDidScroll:(id)arg2;
- (void)commentsTableDataController:(id)arg1 presentViewController:(id)arg2;
- (id)initWithAssetViewModel:(id)arg1;
- (void)_updateTableDataController;

@end
