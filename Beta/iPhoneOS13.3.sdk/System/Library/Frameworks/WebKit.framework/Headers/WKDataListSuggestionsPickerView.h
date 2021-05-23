/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIPickerView.h>

@class WKDataListSuggestionsControl;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPickerView : UIPickerView

{
    WKDataListSuggestionsControl *_control;
}

@property (weak, nonatomic) WKDataListSuggestionsControl *control;

- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;

@end
