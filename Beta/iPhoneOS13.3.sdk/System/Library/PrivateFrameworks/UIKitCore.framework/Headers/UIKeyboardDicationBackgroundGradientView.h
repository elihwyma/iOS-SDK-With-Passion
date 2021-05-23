/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIDictationView, UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackgroundGradientView : UIView

{
    UIKBRenderConfig *_renderConfig;
    UIDictationView *_dictationView;
}

@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (nonatomic) UIDictationView *dictationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColorForCurrentRenderConfig;
- (void)startColorTransitionIn;
- (void)startColorTransitionOut;
- (struct CGRect)_backgroundFillFrame;

@end
