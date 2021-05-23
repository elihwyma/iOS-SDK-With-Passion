/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class NSString, NSTimer, UIAccessibilityHUDItem;

@interface _UIStatusBarStringView : UILabel

{
    _Bool _showsAlternateText;
    long long _fontStyle;
    NSString *_alternateText;
    NSString *_originalText;
    NSTimer *_alternateTextTimer;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic) _Bool showsAlternateText;
@property (copy, nonatomic) NSString *originalText;
@property (nonatomic, readonly) NSTimer *alternateTextTimer;
@property (nonatomic) long long fontStyle;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;
@property (copy, nonatomic) NSString *alternateText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)applyStyleAttributes:(id)arg1;
- (void)_updateAlternateTextTimer;

@end
