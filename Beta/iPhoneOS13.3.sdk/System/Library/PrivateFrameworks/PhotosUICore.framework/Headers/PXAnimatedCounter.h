/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSMutableArray, UIFont, UILabel;

@interface PXAnimatedCounter : UIView

{
    UIFont *_font;
    unsigned long long _number;
    NSMutableArray *_digitLabels;
    UILabel *_backingLabel;
    unsigned long long _animationsInProgress;
    struct CGSize _maxDigitSize;
    struct CGSize _previousSize;
}

@property (readonly) NSMutableArray *digitLabels;
@property (readonly) UILabel *backingLabel;
@property struct CGSize maxDigitSize;
@property unsigned long long animationsInProgress;
@property struct CGSize previousSize;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long number;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithNumber:(unsigned long long)arg1;
- (void)_updateSizeIfNeeded;
- (void)setNumber:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setNumber:(unsigned long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setNumber:(unsigned long long)arg1 withAnimationStyle:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (long long)preferredAnimationStyleForNumber:(unsigned long long)arg1;
- (struct CGSize)requiredSizeForNumber:(unsigned long long)arg1;
- (double)_xOffsetForBackingLabel:(id)arg1;
- (unsigned long long)_numDigitsForNumber:(long long)arg1;
- (id)_numberStringForNumber:(long long)arg1;
- (void)_setCounterToNumber:(unsigned long long)arg1;
- (void)_calculateLargestDigitSize;
- (void)_updateFramesForShownDigits;
- (id)_labelForDigit:(unsigned long long)arg1;

@end
