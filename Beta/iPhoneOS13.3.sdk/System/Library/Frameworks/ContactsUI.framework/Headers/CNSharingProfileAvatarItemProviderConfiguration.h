/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNPhotoPickerColorVariant, PRMonogramColor;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItemProviderConfiguration : NSObject

{
    PRMonogramColor *_monogramColor;
    CNPhotoPickerColorVariant *_animojiColor;
}

@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiColor;

@end
