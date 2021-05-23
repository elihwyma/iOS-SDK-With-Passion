/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UIView.h>

@class NSString, UIColor;

@protocol CEKSliderTickMarksDelegate;

@interface CEKSliderTickMarksView : UIView

{
    _Bool _useTickMarkLegibilityShadows;
    double _tickMarkSpacing;
    long long _mainTickMarkInterval;
    long long _mainTickMarkOffset;
    UIColor *_mainTickMarkColor;
    UIColor *_secondaryTickMarkColor;
    id <CEKSliderTickMarksDelegate> _delegate;
    double _tickMarkWidth;
}

@property (weak, nonatomic) id <CEKSliderTickMarksDelegate> delegate;
@property (nonatomic) double tickMarkWidth;
@property (nonatomic, readonly) long long tickMarksCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long mainTickMarkInterval;
@property (nonatomic) double tickMarkSpacing;
@property (nonatomic) long long mainTickMarkOffset;
@property (nonatomic) _Bool useTickMarkLegibilityShadows;
@property (retain, nonatomic) UIColor *mainTickMarkColor;
@property (retain, nonatomic) UIColor *secondaryTickMarkColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)drawRect:(struct CGRect)arg1;
- (id)_colorForMainTickMarks;
- (id)_colorForSecondaryTickMarks;
- (_Bool)isMainTickMarkIndex:(long long)arg1;
- (double)xOffsetForTickMarkIndex:(long long)arg1;
- (double)widthForTickMarkCount:(unsigned long long)arg1;
- (long long)floorTickMarkIndexForXOffset:(double)arg1;

@end
