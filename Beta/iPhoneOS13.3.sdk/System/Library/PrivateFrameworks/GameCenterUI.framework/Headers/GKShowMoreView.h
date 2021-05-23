/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSLayoutConstraint, UIActivityIndicatorView, UICollectionView;

@interface GKShowMoreView : UICollectionReusableView

{
    _Bool _loading;
    _Bool _showShowAll;
    SEL _showMoreAction;
    double _textAlignmentOffset;
    GKLabel *_label;
    long long _sectionIndex;
    NSLayoutConstraint *_horizontalContraint;
    NSLayoutConstraint *_verticalContraint;
    long long _numberToShow;
    UICollectionView *_collectionView;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) GKLabel *label;
@property (nonatomic) long long sectionIndex;
@property (retain, nonatomic) NSLayoutConstraint *horizontalContraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalContraint;
@property (nonatomic) _Bool showShowAll;
@property (nonatomic) long long numberToShow;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) SEL showMoreAction;
@property (nonatomic) _Bool loading;
@property (nonatomic) double textAlignmentOffset;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateLabel;
- (id)baseTextStyle;

@end
