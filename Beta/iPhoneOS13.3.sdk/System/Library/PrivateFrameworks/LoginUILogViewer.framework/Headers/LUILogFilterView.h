/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UIView.h>

@class UIButton, UICollectionView, UILabel, UIStackView, UITableView, UITextField;

@interface LUILogFilterView : UIView

{
    UITableView *_existingPredicatesTableView;
    UICollectionView *_predicatesKeyCandidateCollectionView;
    UICollectionView *_predicatesComparisonCandidateCollectionView;
    UICollectionView *_predicatesValueCandidateCollectionView;
    UIView *_horizontalSeparatorLine;
    UIView *_veriticalSeparatorLineFirst;
    UIView *_veriticalSeparatorLineSecond;
    UILabel *_currentPredicateLabel;
    UIStackView *_enterPredicateStackView;
    UIButton *_addButton;
    UITextField *_predicateTextField;
    UIButton *_applyButton;
}

@property (retain, nonatomic) UITableView *existingPredicatesTableView;
@property (retain, nonatomic) UICollectionView *predicatesKeyCandidateCollectionView;
@property (retain, nonatomic) UICollectionView *predicatesComparisonCandidateCollectionView;
@property (retain, nonatomic) UICollectionView *predicatesValueCandidateCollectionView;
@property (retain, nonatomic) UIView *horizontalSeparatorLine;
@property (retain, nonatomic) UIView *veriticalSeparatorLineFirst;
@property (retain, nonatomic) UIView *veriticalSeparatorLineSecond;
@property (retain, nonatomic) UILabel *currentPredicateLabel;
@property (retain, nonatomic) UIStackView *enterPredicateStackView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UITextField *predicateTextField;
@property (retain, nonatomic) UIButton *applyButton;

- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createTableView;
- (id)_createCollectionView;
- (id)_createButtonWithTitle:(id)arg1;
- (id)_createSeparatorLine;
- (id)_createPredicateTextField;
- (id)_createEnterPredicateStackViewWithSubViews:(id)arg1;
- (id)_createCurrentPredicateLabel;
- (id)_createEnterLabel;

@end
