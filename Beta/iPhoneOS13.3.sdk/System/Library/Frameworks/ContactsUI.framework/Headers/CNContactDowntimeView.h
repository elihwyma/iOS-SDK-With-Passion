/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSDictionary, NSTextAttachment, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactDowntimeView : UIView

{
    NSDictionary *_ab_textAttributes;
    UILabel *_downtimeLabel;
    NSTextAttachment *_imageAttachment;
}

@property (nonatomic, readonly) UILabel *downtimeLabel;
@property (nonatomic, readonly) NSTextAttachment *imageAttachment;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

+ (id)lockImageAttachment;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)setupAttributedText;

@end
