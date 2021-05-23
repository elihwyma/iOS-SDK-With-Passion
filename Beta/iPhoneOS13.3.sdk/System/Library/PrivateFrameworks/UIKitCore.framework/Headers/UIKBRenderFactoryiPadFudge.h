/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBRenderFactoryiPad.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadFudge : UIKBRenderFactoryiPad

- (id)displayContentsForKey:(id)arg1;
- (struct CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)messagesWriteboardKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (id)lightKeycapsFontName;
- (struct CGPoint)internationalKeyOffset;
- (struct CGPoint)dictationKeyOffset;
- (double)deleteKeyFontSize;
- (double)moreKeyFontSize;
- (struct CGPoint)dismissKeyOffset;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (_Bool)iPadFudgeLayout;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (id)tabKeyImageName;
- (id)returnKeyImageName;
- (id)capslockKeyImageName;
- (double)spaceKeyFontSize;
- (struct CGSize)defaultVariantGeometrySize;
- (unsigned long long)_isFullHeightKeyFor:(id)arg1 onKeyplane:(id)arg2;
- (struct CGPoint)dualStringKeyTopTextOffset:(unsigned long long)arg1;
- (struct CGPoint)dualStringKeyBottomTextOffset:(unsigned long long)arg1;
- (double)stringKeyFontSize:(unsigned long long)arg1;
- (double)dualStringKeyBottomFontSize:(unsigned long long)arg1;
- (double)dualStringKeyTopFontSize:(unsigned long long)arg1;
- (struct CGPoint)stringKeyOffset:(unsigned long long)arg1;
- (struct CGPoint)deleteKeyOffset:(unsigned long long)arg1;
- (double)controlKeyFontSize;
- (struct CGPoint)iPadFudgeControlKeyOffset;
- (struct CGPoint)moreKeyOffset;

@end
