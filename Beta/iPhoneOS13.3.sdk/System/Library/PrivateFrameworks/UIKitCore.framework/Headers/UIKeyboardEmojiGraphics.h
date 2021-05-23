/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphics : NSObject

+ (id)sharedInstance;
+ (id)emojiCategoryImagePath:(id)arg1 forRenderConfig:(id)arg2;
+ (struct CGSize)emojiSize:(_Bool)arg1;
+ (struct CGPoint)padding:(_Bool)arg1;
+ (id)emojiFontAttributesForPortrait:(_Bool)arg1;
+ (_Bool)isWildcatKeyboard;
+ (unsigned char)colCount:(_Bool)arg1;
+ (id)emojiFontAttributes;
+ (unsigned char)rowCount:(_Bool)arg1;
+ (struct CGPoint)margin:(_Bool)arg1;
+ (double)recentLableVerticalPadding:(_Bool)arg1;
+ (double)optionalDescriptionPadding:(_Bool)arg1;
+ (double)emojiPageControlYOffset:(_Bool)arg1;
+ (_Bool)boldText;

- (id)init;

@end
