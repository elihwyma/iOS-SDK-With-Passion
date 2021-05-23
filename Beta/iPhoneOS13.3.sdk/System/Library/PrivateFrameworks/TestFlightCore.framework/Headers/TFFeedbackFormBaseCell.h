/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@protocol TFFeedbackDataUpdateProxy;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormBaseCell : UITableViewCell

{
    id <TFFeedbackDataUpdateProxy> _updateProxy;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (weak, nonatomic) id <TFFeedbackDataUpdateProxy> updateProxy;
@property (nonatomic, readonly, getter=isSelectable) _Bool selectable;

+ (struct CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)_separatorFrameForTop:(_Bool)arg1 inLayoutBounds:(struct CGRect)arg2;
- (void)_setupSeparatorViewsForAppearingInSectionLocation:(int)arg1;
- (id)_createSeparatorSubview;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataString:(id)arg1;
- (void)setDisplayedDataNumber:(id)arg1;
- (void)setDisplayedDataGroupInclusionBool:(_Bool)arg1;
- (void)setDisplayedDataImageCollection:(id)arg1;
- (void)applyContentsOfEntry:(id)arg1;
- (void)prepareSeparatorsForCellInSectionLocation:(int)arg1;

@end
