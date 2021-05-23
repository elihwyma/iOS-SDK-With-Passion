/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell

{
    UIInputSwitcherSegmentControl *_segmentControl;
}

@property (nonatomic, readonly) UIInputSwitcherSegmentControl *segmentControl;

+ (struct CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUsesDarkTheme:(_Bool)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;

@end
