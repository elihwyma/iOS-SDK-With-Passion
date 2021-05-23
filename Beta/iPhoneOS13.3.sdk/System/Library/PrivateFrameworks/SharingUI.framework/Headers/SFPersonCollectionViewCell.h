/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, NSObject, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, SFPersonImageView, UIColor, UIImpactFeedbackGenerator, UILabel, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIView;

@protocol SFPersonCollectionViewCellDelegate;

@interface SFPersonCollectionViewCell : UICollectionViewCell

{
    _Bool _darkStyleOnLegacyApp;
    _Bool _stateBeingRestored;
    SFAirDropNode *_person;
    NSProgress *_progress;
    long long _cellState;
    NSString *_sessionID;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
    double _activitySheetWidth;
    SFPersonImageView *_imageView;
    UIView *_badgedContactView;
    SFCircleProgressView *_circleProgressView;
    id _progressToken;
    NSArray *_progressKeyPaths;
    UILabel *_secondLabel;
    NSArray *_secondLabelVisibleConstraintsArray;
    UIColor *_fadedSecondLabelColor;
    UILabel *_labelForPositioning;
    UINotificationFeedbackGenerator *_notificationHaptic;
    UISelectionFeedbackGenerator *_selectionHaptic;
    UIImpactFeedbackGenerator *_impactHaptic;
    NSLayoutConstraint *_secondLabelFBConstraint;
    NSLayoutConstraint *_cellWidthConstraint;
    NSLayoutConstraint *_chickletToTitleSpacingConstraint;
    NSLayoutConstraint *_nameFirstBaselineConstraint;
    NSLayoutConstraint *_largeTextNameCenterYConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    UILabel *_nameLabel;
}

@property (retain, nonatomic) SFPersonImageView *imageView;
@property (retain, nonatomic) UIView *badgedContactView;
@property (retain, nonatomic) SFCircleProgressView *circleProgressView;
@property (retain, nonatomic) id progressToken;
@property (retain, nonatomic) NSArray *progressKeyPaths;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray;
@property (retain, nonatomic) UIColor *fadedSecondLabelColor;
@property (retain, nonatomic) UILabel *labelForPositioning;
@property (retain, nonatomic) UINotificationFeedbackGenerator *notificationHaptic;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionHaptic;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactHaptic;
@property (retain, nonatomic) NSLayoutConstraint *secondLabelFBConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cellWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *chickletToTitleSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nameFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *largeTextNameCenterYConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) _Bool darkStyleOnLegacyApp;
@property (retain, nonatomic) SFAirDropNode *person;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long cellState;
@property (nonatomic) _Bool stateBeingRestored;
@property (retain, nonatomic) NSString *sessionID;
@property (weak, nonatomic) NSObject<SFPersonCollectionViewCellDelegate> *delegate;
@property (nonatomic) double activitySheetWidth;

+ (struct CGSize)_cachedPreferredItemSizeForViewWidth:(double)arg1 sizeCategory:(id)arg2;
+ (struct CGSize)_cachedPreferredItemSizeForString:(id)arg1 viewWidth:(double)arg2 sizeCategory:(id)arg3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setupConstraints;
- (void)setupConstraintsYukon;
- (void)_updateForCurrentSizeCategory;
- (void)userDidCancel;
- (void)updateNameLabel;
- (void)resetTransferState;
- (void)userDidSelect;
- (void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (struct CGSize)calculatedContentSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2;
- (void)prepareHapticsPreWarm:(_Bool)arg1;
- (void)deactivateHaptics;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updatePersonIconView;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)setCellState:(long long)arg1 animated:(_Bool)arg2 silent:(_Bool)arg3;
- (void)prepareHaptics;
- (void)fireHapticsForState:(long long)arg1;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;

@end
