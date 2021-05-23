/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView

{
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_activeNoEditImages;
    NSArray *_inactiveImages;
    _Bool _enabled;
    _Bool _editing;
    double _edgeInset;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) double edgeInset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)bounce;
- (int)handleForPoint:(struct CGPoint)arg1 hitOffset:(double *)arg2;
- (void)_updateHandleImages;
- (id)_handleImages;
- (struct CGRect)_leftHandleRect;
- (struct CGRect)_rightHandleRect;
- (double)_bounceValueForFraction:(double)arg1;
- (_Bool)pointInsideLeftHandle:(struct CGPoint)arg1;
- (_Bool)pointInsideRightHandle:(struct CGPoint)arg1;

@end
