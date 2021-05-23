/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@protocol PageRangeDelegate;

__attribute__((visibility("hidden")))
@interface _UIPrintPreviewPageCell : UICollectionViewCell <Swift>

{
    _Bool _inRange;
    _Bool _menuPresented;
    _Bool _thisCellIsPresentingMenu;
    _Bool _menuHiddenByTapInThisCell;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_imageView;
    UIView *_dimmingView;
    id <PageRangeDelegate> _delegate;
    long long _pageIndex;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *dimmingView;
@property (weak, nonatomic) id <PageRangeDelegate> delegate;
@property (nonatomic) long long pageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)accessibilityActivate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)gestureRecognizers;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)addAllPages:(id)arg1;
- (void)setStartPage:(id)arg1;
- (void)setEndPage:(id)arg1;
- (void)addPage:(id)arg1;
- (void)removePage:(id)arg1;
- (void)showMenu;
- (_Bool)canModifyPageRange;
- (void)setInRange:(_Bool)arg1 animated:(_Bool)arg2;

@end
