/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class NSAttributedString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewLabel : UILabel

{
    long long _savedNumberOfLines;
    double _firstParagraphFirstLineHeadIndent;
    NSAttributedString *_shadowAttributedText;
    _Bool _usingDefaultFont;
    UITableViewCell *_tableCell;
}

@property (weak, nonatomic) UITableViewCell *tableCell;
@property (nonatomic, readonly) _Bool usingDefaultFont;

- (id)initWithCoder:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)_disabledFontColor;
- (void)_setDefaultFont:(id)arg1;
- (void)_setFirstParagraphFirstLineHeadIndent:(double)arg1;
- (void)_clearNumberOfLines;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;
- (void)_cleanupErrantFirstLineHeadIndent;
- (void)_restoreNumberOfLines;
- (_Bool)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1;

@end
