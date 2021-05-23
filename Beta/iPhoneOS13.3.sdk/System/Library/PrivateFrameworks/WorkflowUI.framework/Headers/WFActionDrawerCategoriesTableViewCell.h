/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UICollectionView, UICollectionViewFlowLayout, WFActionDrawerCategoriesCollectionViewManager, WFActionDrawerCategoriesMetrics;

@protocol WFActionDrawerCategoriesTableViewCellDelegate;

@interface WFActionDrawerCategoriesTableViewCell : UITableViewCell

{
    _Bool _shouldStackVertically;
    id <WFActionDrawerCategoriesTableViewCellDelegate> _delegate;
    UICollectionView *_categoriesCollectionView;
    UICollectionViewFlowLayout *_categoriesFlowLayout;
    WFActionDrawerCategoriesCollectionViewManager *_categoriesCollectionViewManager;
    WFActionDrawerCategoriesMetrics *_metrics;
}

@property (weak, nonatomic) UICollectionView *categoriesCollectionView;
@property (weak, nonatomic) UICollectionViewFlowLayout *categoriesFlowLayout;
@property (retain, nonatomic) WFActionDrawerCategoriesCollectionViewManager *categoriesCollectionViewManager;
@property (weak, nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (weak, nonatomic) id <WFActionDrawerCategoriesTableViewCellDelegate> delegate;
@property (nonatomic) _Bool shouldStackVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)categoriesCollectionViewManager:(id)arg1 didSelectAction:(id)arg2;
- (void)categoriesCollectionViewManager:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)categoriesCollectionViewManagerDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)categoriesCollectionViewManagerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)categoriesCollectionViewManagerDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (void)categoriesCollectionViewManager:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)configureWithContentTypeCategories:(id)arg1 metrics:(id)arg2;
- (void)adjustForVerticalStacking;

@end
