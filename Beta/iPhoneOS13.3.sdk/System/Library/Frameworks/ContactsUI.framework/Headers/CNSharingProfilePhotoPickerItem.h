/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNSharingProfileAvatarItem, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNSharingProfilePhotoPickerItem : NSObject

{
    UIImage *_cachedPreviewImage;
    CNSharingProfileAvatarItem *_avatarItem;
    NSString *_symbolImageName;
}

@property (retain, nonatomic) UIImage *cachedPreviewImage;
@property (retain, nonatomic) CNSharingProfileAvatarItem *avatarItem;
@property (retain, nonatomic) NSString *symbolImageName;

- (id)originalImageWithSize:(struct CGSize)arg1;
- (id)compositeImageWithSize:(struct CGSize)arg1;

@end
