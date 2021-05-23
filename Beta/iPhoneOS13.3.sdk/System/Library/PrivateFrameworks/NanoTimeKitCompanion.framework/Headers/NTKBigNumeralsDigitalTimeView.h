/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSDate, NSString, NTKBigNumeralsTimeComponentLabel;

@interface NTKBigNumeralsDigitalTimeView : UIView

{
    CLKDevice *_device;
    NTKBigNumeralsTimeComponentLabel *_topLabel;
    NTKBigNumeralsTimeComponentLabel *_bottomLabel;
    NSDate *_overrideDate;
    struct NSNumber *_timerToken;
    _Bool _frozen;
    _Bool _showingStatus;
    unsigned long long _style;
    unsigned long long _typeface;
    unsigned long long _color;
}

@property (nonatomic) _Bool showingStatus;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) unsigned long long typeface;
@property (nonatomic, readonly) unsigned long long color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) _Bool frozen;

+ (long long)uiSensitivity;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)applyStyle:(unsigned long long)arg1;
- (void)_updateLabels;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTypeface:(unsigned long long)arg1;
- (void)applyColor:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)cleanupTransition;

@end
