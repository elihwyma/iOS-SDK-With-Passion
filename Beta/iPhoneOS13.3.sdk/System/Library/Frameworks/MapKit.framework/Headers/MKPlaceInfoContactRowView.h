/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class CNLabeledValue, MKPlaceSectionHeaderView, MKVibrantLabel, NSArray, NSLayoutConstraint, NSString, UIColor, _MKUILabel;

@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView

{
    MKPlaceSectionHeaderView *_headerView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_topToIconConstraint;
    NSLayoutConstraint *_titleToValueConstraint;
    NSLayoutConstraint *_valueToTrailingViewConstraint;
    NSArray *_iconConstraints;
    NSArray *_titleConstraints;
    _Bool _isInRightMouseDownEvent;
    _Bool _textIsSelectable;
    CNLabeledValue *_labeledValue;
    MKVibrantLabel *_titleLabel;
    _MKUILabel *_valueLabel;
    CDUnknownBlockType _iconSelectedBlock;
    NSLayoutConstraint *_valueToBottomConstraint;
    UIColor *_labelColor;
}

@property (nonatomic, readonly) MKVibrantLabel *titleLabel;
@property (nonatomic, readonly) _MKUILabel *valueLabel;
@property (retain, nonatomic) NSLayoutConstraint *valueToBottomConstraint;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) CNLabeledValue *labeledValue;
@property (copy, nonatomic) CDUnknownBlockType iconSelectedBlock;
@property (nonatomic, readonly) id <NSItemProviderWriting> draggableContent;
@property (nonatomic, readonly) int analyticsTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)icon;

- (id)_icon;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (void)_contentSizeDidChange;
- (id)_valueString;
- (Class)_labeledValueExpectedValueType;
- (id)_iconAccessibilityLabel;

@end
