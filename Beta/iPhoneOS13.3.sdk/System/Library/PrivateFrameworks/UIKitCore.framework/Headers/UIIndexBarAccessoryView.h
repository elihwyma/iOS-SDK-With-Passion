/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIIndexBarView.h>

@class UIScrollView;

@protocol UIIndexBarAccessoryViewDelegate;

@interface UIIndexBarAccessoryView : UIIndexBarView

{
    UIScrollView *_scrollView;
    long long _edge;
}

@property (weak, nonatomic) id <UIIndexBarAccessoryViewDelegate> delegate;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (nonatomic, readonly) _Bool overlay;

- (void)update;
- (void)setEntries:(id)arg1;
- (_Bool)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (id)displayEntryNearestToContentOffset:(struct CGPoint)arg1;

@end
