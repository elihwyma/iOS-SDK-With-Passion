/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerVariantsManager : NSObject

{
    NSArray *_avatarBackgrounds;
}

@property (retain, nonatomic) NSArray *avatarBackgrounds;

+ (id)avatarBackgroundsFromDictionary:(id)arg1;
+ (id)colorFromRGBArray:(id)arg1;
+ (id)colorFromRGBString:(id)arg1;
+ (id)colorVariantWithColorNamed:(id)arg1;
+ (id)avatarPoseConfigurationsForAvatarRecord:(id)arg1;
+ (id)sharingProfileAvatarPoseConfigurationForAvatarRecord:(id)arg1;
+ (id)colorGradientBackground:(id)arg1;
+ (id)gradientStartColor:(id)arg1;
+ (id)nonAlphaColorForBackgroundColor:(id)arg1;
+ (id)compositeColorForTopColor:(id)arg1 bottomColor:(id)arg2;
+ (id)generateGradientColorsByColor;

- (id)init;

@end
