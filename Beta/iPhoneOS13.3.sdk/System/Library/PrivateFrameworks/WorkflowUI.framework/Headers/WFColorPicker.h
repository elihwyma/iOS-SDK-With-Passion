/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, WFColor;

@protocol WFColorPickerDelegate;

@interface WFColorPicker : UIView <Swift>

{
    WFColor *_selectedColor;
    id <WFColorPickerDelegate> _delegate;
    NSArray *_colors;
    NSArray *_colorNames;
    UICollectionView *_colorCollectionView;
}

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *colorNames;
@property (retain, nonatomic) UICollectionView *colorCollectionView;
@property (retain, nonatomic) WFColor *selectedColor;
@property (weak, nonatomic) id <WFColorPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

@end
