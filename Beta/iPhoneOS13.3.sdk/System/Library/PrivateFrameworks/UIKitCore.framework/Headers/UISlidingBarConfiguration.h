/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <Swift>

{
    _Bool _leadingMayBeHidden;
    _Bool _trailingMayBeHidden;
    _Bool _allowMixedSideBySideAndOverlay;
    _Bool __leadingBorderWidthIsInPixels;
    _Bool __trailingBorderWidthIsInPixels;
    double _minimumMainWidthFraction;
    double _minimumMainWidthFractionForSecondColumn;
    double _maximumMainWidth;
    NSArray *_leadingWidths;
    NSArray *_trailingWidths;
    UIColor *_borderColor;
    double __rawLeadingBorderWidth;
    double __rawTrailingBorderWidth;
    long long __leadingBackgroundStyle;
    long long __trailingBackgroundStyle;
}

@property (nonatomic, setter=_setRawLeadingBorderWidth:) double _rawLeadingBorderWidth;
@property (nonatomic, setter=_setLeadingBorderWidthIsInPixels:) _Bool _leadingBorderWidthIsInPixels;
@property (nonatomic, setter=_setRawTrailingBorderWidth:) double _rawTrailingBorderWidth;
@property (nonatomic, setter=_setTrailingBorderWidthIsInPixels:) _Bool _trailingBorderWidthIsInPixels;
@property (nonatomic, setter=_setLeadingBackgroundStyle:) long long _leadingBackgroundStyle;
@property (nonatomic, setter=_setTrailingBackgroundStyle:) long long _trailingBackgroundStyle;
@property (nonatomic) double minimumMainWidthFraction;
@property (nonatomic) double minimumMainWidthFractionForSecondColumn;
@property (nonatomic) double maximumMainWidth;
@property (nonatomic) _Bool leadingMayBeHidden;
@property (nonatomic) _Bool trailingMayBeHidden;
@property (copy, nonatomic) NSArray *leadingWidths;
@property (copy, nonatomic) NSArray *trailingWidths;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) _Bool allowMixedSideBySideAndOverlay;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)leadingBorderWidthForScale:(double)arg1;
- (double)trailingBorderWidthForScale:(double)arg1;
- (void)setLeadingBorderWidthInPixels:(double)arg1;
- (void)setTrailingBorderWidthInPixels:(double)arg1;
- (void)setLeadingBorderWidthInPoints:(double)arg1;
- (void)setTrailingBorderWidthInPoints:(double)arg1;

@end
