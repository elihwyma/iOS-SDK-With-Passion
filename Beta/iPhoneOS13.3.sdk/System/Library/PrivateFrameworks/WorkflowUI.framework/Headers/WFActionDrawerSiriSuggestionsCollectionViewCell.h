/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSString, UILabel, UIViewController, WFActionDrawerImage, WFActionDrawerImageLoadTask, WFCircularImageView, WFDragController, WFDragGestureRecognizer;

@protocol VCActionDonation;

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell

{
    NSString *_title;
    long long _cellType;
    id <VCActionDonation> _donation;
    WFDragGestureRecognizer *_dragRecognizer;
    WFDragController *_dragController;
    UIViewController *_containingViewController;
    WFCircularImageView *_imageView;
    WFActionDrawerImage *_image;
    WFActionDrawerImageLoadTask *_imageLoadTask;
    UILabel *_titleLabel;
    NSArray *_verticalStackConstraints;
    NSArray *_horizontalStackConstraints;
}

@property (weak, nonatomic) WFCircularImageView *imageView;
@property (retain, nonatomic) WFActionDrawerImage *image;
@property (retain, nonatomic) WFActionDrawerImageLoadTask *imageLoadTask;
@property (weak, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *verticalStackConstraints;
@property (retain, nonatomic) NSArray *horizontalStackConstraints;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long cellType;
@property (nonatomic, readonly) id <VCActionDonation> donation;
@property (weak, nonatomic) WFDragGestureRecognizer *dragRecognizer;
@property (nonatomic, readonly) WFDragController *dragController;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldStackVerticallyForTraitCollection:(id)arg1;
+ (struct CGSize)preferredSizeForType:(long long)arg1 forTraitCollection:(id)arg2;
+ (struct CGSize)sizeForCellUsingVerticalStacking:(_Bool)arg1;
+ (double)spacingForType:(long long)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setUpLayoutConstraints;
- (void)adjustStackingStyle;
- (void)configureWithCellType:(long long)arg1 title:(id)arg2 donation:(id)arg3 genericAction:(id)arg4 forDailyRoutines:(_Bool)arg5;
- (void)loadImageForInteractionDonation:(id)arg1;
- (_Bool)shouldStackVerticallyForTraitCollection:(id)arg1;

@end
