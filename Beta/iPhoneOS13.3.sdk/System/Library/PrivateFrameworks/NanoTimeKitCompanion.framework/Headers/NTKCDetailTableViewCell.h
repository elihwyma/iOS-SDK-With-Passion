/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell

{
    _Bool _showsSeparator;
    _Bool _ignoresRTLCorrection;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) _Bool ignoresRTLCorrection;
@property (nonatomic) _Bool showsSeparator;

+ (id)defaultTextColor;
+ (id)reuseIdentifier;
+ (id)titleFont;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)rowHeight;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_fontSizeDidChange;
- (_Bool)_visibleAtPoint:(struct CGPoint)arg1;
- (id)_fontForTextLabel;
- (id)_fontForDetailTextLabel;

@end
