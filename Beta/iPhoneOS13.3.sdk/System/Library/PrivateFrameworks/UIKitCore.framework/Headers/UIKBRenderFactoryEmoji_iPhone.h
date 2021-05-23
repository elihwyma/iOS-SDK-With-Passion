/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactory_Emoji.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(_Bool)arg4 blurBlending:(_Bool)arg5;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)emojiInternationalKeySize;
- (struct CGPoint)emojiInternationalKeyOffset;
- (struct CGPoint)emojiPopupTextOffset;

@end
