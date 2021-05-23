/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, UICollectionView, UILabel, UISlider, UIStepper;

@interface AKFontSizePicker : UIControl

{
    double _value;
    CDUnknownBlockType _willBeginTrackingUpdates;
    CDUnknownBlockType _didEndTrackingUpdates;
    long long _style;
    UILabel *_label;
    UIStepper *_stepper;
    UISlider *_slider;
    UICollectionView *_sizeList;
    NSArray *_sizeListValues;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIStepper *stepper;
@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UICollectionView *sizeList;
@property (retain, nonatomic) NSArray *sizeListValues;
@property (nonatomic) double value;
@property (copy, nonatomic) CDUnknownBlockType willBeginTrackingUpdates;
@property (copy, nonatomic) CDUnknownBlockType didEndTrackingUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)_handleValueChanged:(id)arg1;
- (struct CGSize)_itemSizeInContainer;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderTouchDown:(id)arg1;
- (void)_decreaseSize:(id)arg1;
- (void)_increaseSize:(id)arg1;
- (void)_selectSizeInList;

@end
