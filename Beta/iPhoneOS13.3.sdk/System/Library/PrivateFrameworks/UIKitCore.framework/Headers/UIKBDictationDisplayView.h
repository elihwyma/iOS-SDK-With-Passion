/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKBDictationDisplayView : UIKBKeyView

{
    UIDictationView *_dictationView;
}

@property (retain, nonatomic) UIDictationView *dictationView;

- (void)dealloc;
- (void)removeFromSuperview;
- (void)setRenderConfig:(id)arg1;
- (void)prepareForDisplay;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateDictationColor;

@end
