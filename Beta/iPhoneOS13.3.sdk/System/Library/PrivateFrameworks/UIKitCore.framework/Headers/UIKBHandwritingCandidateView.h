/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBCandidateView.h>

__attribute__((visibility("hidden")))
@interface UIKBHandwritingCandidateView : UIKBCandidateView

+ (double)shadowYForBounds:(struct CGRect)arg1 shadowHeight:(double)arg2;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)updateCandidateKey;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
