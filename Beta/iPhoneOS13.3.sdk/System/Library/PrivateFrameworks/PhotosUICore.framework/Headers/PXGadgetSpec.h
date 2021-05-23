/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface PXGadgetSpec : NSObject

{
    _Bool _shouldInsetAllContent;
    _Bool _shouldUseAccessibilityLayout;
    long long _scrollAxis;
    double _interItemSpacing;
    long long _layoutSizeClass;
    long long _layoutOrientation;
    double _displayScale;
    double _layoutReferenceWidth;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _layoutInsets;
    struct UIEdgeInsets _accessoryViewInset;
}

@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) long long scrollAxis;
@property (nonatomic, readonly) _Bool shouldInsetAllContent;
@property (nonatomic, readonly) double interItemSpacing;
@property (nonatomic, readonly) long long layoutSizeClass;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) double layoutReferenceWidth;
@property (nonatomic, readonly) struct UIEdgeInsets layoutInsets;
@property (nonatomic, readonly) _Bool shouldUseAccessibilityLayout;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets accessoryViewInset;

+ (id)horizontalContentInsetsInterpolator;
+ (double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(_Bool)arg2;
+ (double)sectionHeaderTitleHeightForStyle:(unsigned long long)arg1 dividerHidden:(_Bool)arg2;
+ (double)sectionHeaderTopSpacingForStyle:(unsigned long long)arg1;
+ (double)sectionHeaderTitleBottomSpacingForStyle:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldInsetContentForTraitCollection:(id)arg1;
- (struct UIEdgeInsets)acccessoryViewInsetForTraitCollection:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2;
- (double)columnWidthForColumnSpan:(long long)arg1;
- (_Bool)isEqualToGadgetSpec:(id)arg1;
- (double)columnSpacingForColumnSpan:(long long)arg1;

@end
