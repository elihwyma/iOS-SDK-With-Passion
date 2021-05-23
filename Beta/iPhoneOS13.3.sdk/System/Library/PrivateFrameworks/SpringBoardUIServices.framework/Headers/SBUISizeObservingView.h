/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardFoundation/SBFView.h>

@protocol SBUISizeObservingViewDelegate;

@interface SBUISizeObservingView : SBFView

{
    _Bool _delegateInterestedInSizeChanges;
    id <SBUISizeObservingViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SBUISizeObservingViewDelegate> delegate;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
