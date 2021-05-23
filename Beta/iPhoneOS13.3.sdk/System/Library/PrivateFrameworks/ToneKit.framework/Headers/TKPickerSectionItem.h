/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <ToneKit/TKPickerItem.h>

@class NSString;

@interface TKPickerSectionItem : TKPickerItem

{
    NSString *_text;
    NSString *_footerText;
}

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setFooterText:) NSString *footerText;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end
