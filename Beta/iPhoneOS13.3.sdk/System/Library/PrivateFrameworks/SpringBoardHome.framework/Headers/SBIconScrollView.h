/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <BaseBoardUI/BSUIScrollView.h>

@protocol SBIconScrollViewDelegate;

@interface SBIconScrollView : BSUIScrollView

@property (weak, nonatomic) id <SBIconScrollViewDelegate> delegate;

- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint)arg1;
- (_Bool)cancelTouchTracking;
- (_Bool)_scrollsToMakeFirstResponderVisible;
- (struct CGPoint)_roundedProposedContentOffset:(struct CGPoint)arg1;

@end
