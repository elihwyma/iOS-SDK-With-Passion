/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject

{
    ARUISpriteTexture *_defaultSpriteTexture;
    ARUISpriteTexture *_sharingSpriteTexture;
}

+ (id)sharedInstance;
+ (id)defaultSpriteSheet;
+ (id)spriteSheetForRingType:(long long)arg1;
+ (id)sharingSpriteSheet;

- (id)defaultSpriteTexture;
- (id)sharingSpriteTexture;

@end
