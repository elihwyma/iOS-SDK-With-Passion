/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface STCandyBarView : UIView

{
    _Bool _useVibrancy;
    NSArray *_usageItems;
    NSArray *_viewItems;
}

@property (readonly) _Bool useVibrancy;
@property (copy, nonatomic) NSArray *viewItems;
@property (copy, nonatomic) NSArray *usageItems;

- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateSectionViewImages;
- (id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3;
- (id)initWithVibrancy:(_Bool)arg1;
- (void)setUsageItems:(id)arg1 animated:(_Bool)arg2;

@end
