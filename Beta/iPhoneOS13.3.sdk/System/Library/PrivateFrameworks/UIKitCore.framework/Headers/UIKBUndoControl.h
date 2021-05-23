/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSLayoutConstraint, UIImageView, UIKBUndoStyling, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKBUndoControl : UIControl

{
    long long _type;
    UIKBUndoStyling *_style;
    UIView *_springCoverView;
    UILabel *_label;
    UIImageView *_icon;
    NSLayoutConstraint *_coverConstraintLeftAnchor;
    NSLayoutConstraint *_coverConstraintRightAnchor;
    NSLayoutConstraint *_coverConstraintTopAnchor;
    NSLayoutConstraint *_coverConstraintBottomAnchor;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (retain, nonatomic) UIView *springCoverView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintLeftAnchor;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintRightAnchor;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintBottomAnchor;

+ (id)controlLableTextByType:(long long)arg1 available:(_Bool)arg2;
+ (id)undoInteractiveControlLabelFont;
+ (id)undoStateControlLabelFont;
+ (id)undoStateControlUnavailableLabelFont;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutControlForType:(long long)arg1 andStyling:(id)arg2;
- (id)imageSymbolConfiguration;
- (id)controlImageByType:(long long)arg1;
- (id)initWithType:(long long)arg1 andStyling:(id)arg2;
- (void)updateUndoControlStyleForState:(unsigned long long)arg1;
- (void)updateCoverWithTavelProcess:(double)arg1 isRTL:(_Bool)arg2;
- (id)controlLabelImageNameByType:(long long)arg1 isRTL:(_Bool)arg2;

@end
