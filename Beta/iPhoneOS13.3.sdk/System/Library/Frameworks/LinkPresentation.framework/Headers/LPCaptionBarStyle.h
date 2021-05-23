/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPCaptionBarAccessoryStyle, LPImageViewStyle, LPMusicPlayButtonStyle, LPPadding, LPPointUnit, LPVerticalTextStackViewStyle;

__attribute__((visibility("hidden")))
@interface LPCaptionBarStyle : NSObject

{
    LPImageViewStyle *_leadingIcon;
    LPImageViewStyle *_trailingIcon;
    LPCaptionBarAccessoryStyle *_leadingAccessory;
    LPCaptionBarAccessoryStyle *_trailingAccessory;
    LPVerticalTextStackViewStyle *_textStack;
    LPPointUnit *_minimumWidth;
    LPImageViewStyle *_placeholderIcon;
    LPMusicPlayButtonStyle *_playButton;
    LPPadding *_playButtonPadding;
}

@property (nonatomic, readonly) LPImageViewStyle *leadingIcon;
@property (nonatomic, readonly) LPImageViewStyle *trailingIcon;
@property (nonatomic, readonly) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (nonatomic, readonly) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (nonatomic, readonly) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (nonatomic, readonly) LPImageViewStyle *placeholderIcon;
@property (nonatomic, readonly) LPMusicPlayButtonStyle *playButton;
@property (retain, nonatomic, readonly) LPPadding *playButtonPadding;

- (id)leftIcon;
- (id)rightIcon;
- (id)leftAccessory;
- (id)rightAccessory;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2;

@end
