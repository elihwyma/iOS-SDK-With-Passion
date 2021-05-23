/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIContentButton.h>

@interface SiriUIHelpButton : SiriUIContentButton

{
    _Bool _animatingEmphasis;
    _Bool _emphasized;
}

+ (id)buttonWithHelpImageMask;

- (void)pulse;
- (void)setEmphasized:(_Bool)arg1;
- (double)_targetAlpha;

@end
