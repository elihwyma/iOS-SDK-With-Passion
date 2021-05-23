/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIPickerView, _UIBackdropView;

@protocol SKUIPickerViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIPickerView : UIView

{
    _UIBackdropView *_backdropView;
    id <SKUIPickerViewDelegate> _delegate;
    UIPickerView *_pickerView;
    UIView *_separatorView;
    NSArray *_titles;
}

@property (weak, nonatomic) id <SKUIPickerViewDelegate> delegate;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)initWithTitles:(id)arg1;

@end
