/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIPickerView.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKMultipleSelectPicker : UIPickerView

{
    WKContentView *_view;
    long long _textAlignment;
    unsigned long long _singleSelectionIndex;
    _Bool _allowsMultipleSelection;
    double _layoutWidth;
    double _fontSize;
    double _maximumTextWidth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithView:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(_Bool)arg4;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;
- (long long)findItemIndexAt:(int)arg1;

@end
