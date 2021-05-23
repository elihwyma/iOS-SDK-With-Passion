/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIPickerView.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectSinglePicker : UIPickerView

{
    WKContentView *_view;
    long long _selectedIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;

@end
