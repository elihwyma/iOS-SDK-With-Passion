/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIPickerContentView.h>

__attribute__((visibility("hidden")))
@interface WKOptionPickerCell : UIPickerContentView

{
    _Bool _disabled;
}

@property (nonatomic) _Bool disabled;

- (id)init;
- (_Bool)_isSelectable;
- (id)initWithOptionItem:(const struct OptionItem *)arg1;

@end
