/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingPickerLayoutAttributes : NSObject

{
    double _topToAvatarPadding;
    UIFont *_headerFont;
    double _avatarViewToNamePadding;
    UIColor *_backgroundColor;
    struct CGSize _avatarViewSize;
}

@property (nonatomic, readonly) double topToAvatarPadding;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) struct CGSize avatarViewSize;
@property (nonatomic, readonly) double avatarViewToNamePadding;
@property (nonatomic, readonly) UIColor *backgroundColor;

+ (id)buddyHeaderFont;
+ (id)settingsHeaderFont;
+ (id)layoutAttributesForBuddy;
+ (id)layoutAttributesForSettings;

- (id)initWithTopToAvatarPadding:(double)arg1 headerFont:(id)arg2 avatarViewSize:(struct CGSize)arg3 avatarViewToNamePadding:(double)arg4 backgroundColor:(id)arg5;

@end
