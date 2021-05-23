/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIControl.h>

@class NSIndexSet, NSMutableArray, UIColor, UIFont;

@interface TSKSegmentedControl : UIControl

{
    NSMutableArray *mItems;
    NSMutableArray *mButtonSegments;
    NSIndexSet *mSelectedSegmentIndices;
    _Bool mAllowsMultipleSelection;
    _Bool mAllowsEmptySelection;
    long long mLastPressedSegmentIndex;
    void *mUserData;
    UIFont *mFont;
    int mStyle;
    int _segmentedControlStyle;
    UIColor *mSelectedTintColor;
}

@property (retain, nonatomic) UIColor *selectedTintColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) int segmentedControlStyle;
@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (copy, nonatomic) NSIndexSet *selectedSegmentIndices;
@property (nonatomic, readonly) long long lastPressedSegmentIndex;
@property (nonatomic) _Bool allowsMultipleSelection;
@property (nonatomic) _Bool allowsEmptySelection;
@property (nonatomic) void *userData;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (id)initWithItems:(id)arg1;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (long long)tagForSegment:(unsigned long long)arg1;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 style:(int)arg2;
- (void)tappedSegment:(id)arg1;
- (void)p_setSegmentedControlStyle:(int)arg1;
- (void)p_updateSegmentProperties;
- (void)p_setSelectedTintColor:(id)arg1;
- (void)sizeToFitWidth:(float)arg1;
- (id)p_losengeBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_fullBleedBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (void)p_setButtonAttributedTitle:(id)arg1 color:(id)arg2 forState:(unsigned long long)arg3 button:(id)arg4;
- (id)p_backgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)initWithItems:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 forSegment:(unsigned long long)arg3;
- (unsigned long long)segmentWithTag:(long long)arg1;

@end
