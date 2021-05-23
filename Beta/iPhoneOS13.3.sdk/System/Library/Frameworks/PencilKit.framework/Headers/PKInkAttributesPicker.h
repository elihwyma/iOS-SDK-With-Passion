/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

@class NSString, PKInk, _PKInkAttributesPickerView;

@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : UIViewController

{
    id <PKInkAttributesPickerDelegate> _delegate;
    _PKInkAttributesPickerView *_pickerView;
}

@property (retain, nonatomic) _PKInkAttributesPickerView *pickerView;
@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) PKInk *selectedInk;
@property (retain, nonatomic) id <PKInkAttributesPickerDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (id)initWithInk:(id)arg1;
- (void)setSelectedInk:(id)arg1 animated:(_Bool)arg2;
- (void)_notifyInkAttributesPickerDidChangeInk;
- (void)inkAttributesPickerViewDidChangeInkOpacity:(id)arg1;
- (void)inkAttributesPickerViewDidChangeInkThickness:(id)arg1;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1;

@end
