/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, NSString, UITapGestureRecognizer;

@protocol PUFeedCellDelegate;

__attribute__((visibility("hidden")))
@interface PUFeedCell : UICollectionViewCell

{
    _Bool _tappable;
    id <PUFeedCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    NSString *_representedElementKind;
    UITapGestureRecognizer *__tapGestureRecognizer;
    struct CGPoint _parallaxOffset;
    struct CGPoint _edgeParallaxOffset;
}

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSString *representedElementKind;
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer;
@property (weak, nonatomic) id <PUFeedCellDelegate> delegate;
@property (nonatomic, getter=isTappable) _Bool tappable;
@property (nonatomic) struct CGPoint parallaxOffset;
@property (nonatomic) struct CGPoint edgeParallaxOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGRect)rectWithAspectRatio:(double)arg1 fillingRect:(struct CGRect)arg2 parallaxOffset:(struct CGPoint)arg3 edgeParallaxOffset:(struct CGPoint)arg4;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_updateTapGestureRecognizer;
- (_Bool)shouldRecognizerTap:(id)arg1;

@end
