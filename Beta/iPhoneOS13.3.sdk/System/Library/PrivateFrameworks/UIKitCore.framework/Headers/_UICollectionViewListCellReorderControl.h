/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImageView, UILongPressGestureRecognizer;

@protocol _UICollectionViewListCellReorderControlDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellReorderControl : UIView <Swift>

{
    UIImageView *_imageView;
    UILongPressGestureRecognizer *_reorderRecognizer;
    _Bool _tracking;
    id <_UICollectionViewListCellReorderControlDelegate> _delegate;
    CDUnknownBlockType _grabberImageProvider;
}

@property (copy, nonatomic) CDUnknownBlockType grabberImageProvider;
@property (weak, nonatomic) id <_UICollectionViewListCellReorderControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect)arg1 grabberImageProvider:(CDUnknownBlockType)arg2;
- (void)pan:(id)arg1;
- (void)beginReordering;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)endReordering:(_Bool)arg1;

@end
