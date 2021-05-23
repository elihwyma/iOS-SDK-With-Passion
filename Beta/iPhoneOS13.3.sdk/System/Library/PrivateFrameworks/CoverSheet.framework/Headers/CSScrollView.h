/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <SpringBoardFoundation/SBFPagedScrollView.h>

@protocol CSScrollViewDelegate;

@interface CSScrollView : SBFPagedScrollView

@property (weak, nonatomic) id <CSScrollViewDelegate> delegate;

- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;

@end
