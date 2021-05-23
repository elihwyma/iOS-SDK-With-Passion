/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <ContactsUI/CNAvatarView.h>

@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView

{
    SFContactImage *_contactImage;
}

@property (retain, nonatomic) SFContactImage *contactImage;

- (id)init;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end
