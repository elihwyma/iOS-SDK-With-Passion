/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAvatarImageUtilities : NSObject

+ (struct UIEdgeInsets)transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(_Bool)arg2;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(_Bool)arg2;

@end
