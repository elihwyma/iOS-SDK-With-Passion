/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

@class TUISystemInputAssistantView, UIKBHandwritingCandidateView, UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIHandwritingAssistantView : UIKBKeyView

{
    TUISystemInputAssistantView *_systemInputAssistantView;
    UIKBHandwritingCandidateView *_candidateView;
    UIKeyboardCandidatePocketShadow *_rightBorder;
}

@property (retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
@property (retain, nonatomic) UIKBHandwritingCandidateView *candidateView;
@property (retain, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)candidateList;
- (void)dimKeys:(id)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (struct CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2;

@end
