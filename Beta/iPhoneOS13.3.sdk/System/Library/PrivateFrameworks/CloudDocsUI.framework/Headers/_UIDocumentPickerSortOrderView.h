/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UIControl.h>

@class NSArray, UIButton, UISegmentedControl;

@protocol _UIDocumentPickerViewServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSortOrderView : UIControl

{
    _Bool _listModeToggleHidden;
    id <_UIDocumentPickerViewServiceViewController> _serviceViewController;
    long long _listMode;
    UISegmentedControl *_sortOrder;
    UIButton *_listModeToggle;
    NSArray *_leftAlignedConstraints;
    NSArray *_centeredConstraints;
}

@property (retain, nonatomic) UISegmentedControl *sortOrder;
@property (retain, nonatomic) UIButton *listModeToggle;
@property (copy, nonatomic) NSArray *leftAlignedConstraints;
@property (copy, nonatomic) NSArray *centeredConstraints;
@property (nonatomic) id <_UIDocumentPickerViewServiceViewController> serviceViewController;
@property (nonatomic) int value;
@property (nonatomic) long long listMode;
@property (nonatomic) _Bool listModeToggleHidden;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)valueChanged:(id)arg1;
- (void)_toggleListMode:(id)arg1;
- (void)updateForListMode;

@end
