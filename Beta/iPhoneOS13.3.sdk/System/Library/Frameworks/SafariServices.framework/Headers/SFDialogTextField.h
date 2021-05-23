/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITextField.h>

__attribute__((visibility("hidden")))
@interface SFDialogTextField : UITextField

{
    unsigned long long _stackPosition;
}

@property (nonatomic) unsigned long long stackPosition;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)_placeholderColor;

@end
