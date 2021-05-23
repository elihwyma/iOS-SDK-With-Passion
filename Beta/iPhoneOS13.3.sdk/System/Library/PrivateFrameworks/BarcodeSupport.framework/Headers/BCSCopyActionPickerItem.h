/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSActionPickerItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCopyActionPickerItem : BCSActionPickerItem

{
    NSString *_textToCopy;
}

@property (copy, nonatomic, readonly) NSString *textToCopy;

- (void)performAction;
- (_Bool)isCopyActionItem;
- (id)initWithAction:(id)arg1 textToCopy:(id)arg2;

@end
