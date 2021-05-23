/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryEmoji_iPhone.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone

- (double)keyCornerRadius;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)messagesWriteboardKeyImageName;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (id)lightKeycapsFontName;
- (id)thinKeycapsFontName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (double)emojiInternationalKeySize;
- (struct CGPoint)emojiInternationalKeyOffset;
- (struct CGPoint)emojiPopupTextOffset;

@end
