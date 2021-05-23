/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIBarButtonItem, UIKBAutoFillTestTagRequest, UILabel, UIPickerView, UIToolbar, UIVisualEffectView;

@protocol UIKBAutoFillTestTaggerViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTaggerView : UIView

{
    UIKBAutoFillTestTagRequest *_currentRequest;
    UIPickerView *_pickerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_nextBarButtoItem;
    UIBarButtonItem *_previousBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIVisualEffectView *_visualEffectView;
    UILabel *_titleLabel;
    id <UIKBAutoFillTestTaggerViewDelegate> _delegate;
    NSArray *_tagRequests;
}

@property (weak, nonatomic) id <UIKBAutoFillTestTaggerViewDelegate> delegate;
@property (copy, nonatomic) NSArray *tagRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_previousBarButtonAction:(id)arg1;
- (void)_nextBarButtonAction:(id)arg1;
- (void)_doneBarButtonAction:(id)arg1;
- (void)_performTagRequest:(id)arg1;
- (id)_formTypes;
- (id)_textFieldTypes;
- (void)_updateToolbarButtons;
- (void)_updateTitle;

@end
