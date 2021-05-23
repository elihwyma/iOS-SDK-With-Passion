/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPickerView.h>

@class DOMHTMLSelectElement, NSArray, NSString;

@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectMultiplePicker : UIPickerView

{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    id <UIWebSelectedItemPrivate> _singleSelectionItem;
    unsigned long long _singleSelectionIndex;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    double _layoutWidth;
}

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) NSArray *_cachedItems;
@property (retain, nonatomic) id <UIWebSelectedItemPrivate> _singleSelectionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (int)_itemIndexForRowIndex:(int)arg1;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(_Bool)arg5;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(_Bool)arg4;

@end
