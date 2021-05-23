/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UILabel.h>

@class GKTextStyle, NSString;

@interface GKLabel : UILabel

{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
    _Bool _shouldEnforcePreferredWidth;
    _Bool _usingAttributedText;
    _Bool _shouldInhibitReplay;
    double _actualFontShrinkageFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) double actualFontShrinkageFactor;
@property (nonatomic) _Bool shouldEnforcePreferredWidth;
@property (nonatomic, readonly) _Bool usingAttributedText;
@property (nonatomic) _Bool shouldInhibitReplay;

+ (void)initialize;

- (void)setBounds:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)setAttributedText:(id)arg1;
- (void)applyTextStyle:(id)arg1;
- (void)replayAndApplyStyleWithSystemContentChange:(_Bool)arg1;
- (void)replayAndApplyStyleUnlessInhibited;
- (struct CGSize)shrinkFontToFitSize:(struct CGSize)arg1;
- (void)shrinkFontToFitWidth;

@end
