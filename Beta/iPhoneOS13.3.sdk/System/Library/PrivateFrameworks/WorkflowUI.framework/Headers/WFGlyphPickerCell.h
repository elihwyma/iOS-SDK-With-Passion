/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewCell.h>

@class WFGlyphView;

@interface WFGlyphPickerCell : UICollectionViewCell

{
    WFGlyphView *_glyphView;
}

@property (weak, nonatomic) WFGlyphView *glyphView;
@property (nonatomic) unsigned short glyphCharacter;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setSelected:(_Bool)arg1;

@end
