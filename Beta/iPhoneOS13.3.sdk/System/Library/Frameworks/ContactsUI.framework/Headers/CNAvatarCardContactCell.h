/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardContactCell : CNAvatarCardActionCell

{
    UIImageView *_contactImageView;
}

@property (retain, nonatomic) UIImageView *contactImageView;

- (void)prepareForReuse;
- (void)reloadData;
- (void)awakeFromNib;
- (void)_updateFonts;
- (_Bool)moreHighlighted;

@end
