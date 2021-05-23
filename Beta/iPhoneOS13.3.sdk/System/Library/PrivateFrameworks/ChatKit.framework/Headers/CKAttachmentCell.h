/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKAnimatedImage, CKAttachmentItem, NSArray, NSObject, NSString, UIImage, UIImageView, UITapGestureRecognizer;

@protocol CKAttachmentCellDelegate;

__attribute__((visibility("hidden")))
@interface CKAttachmentCell : UICollectionViewCell

{
    _Bool _editing;
    _Bool _isIrisAsset;
    UIImage *_image;
    CKAnimatedImage *_animatedImage;
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    CKAttachmentItem *_representedObject;
    NSArray *_frames;
    UITapGestureRecognizer *_tapRecognizer;
    UIImageView *_irisBadgeView;
}

@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIImageView *irisBadgeView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (weak, nonatomic) NSObject<CKAttachmentCellDelegate> *delegate;
@property (retain, nonatomic) CKAttachmentItem *representedObject;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) _Bool isIrisAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)copy:(id)arg1;
- (void)delete:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)more:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)updateAnimationTimerObserving;
- (struct CGImage *)_cgImageForUIImage:(id)arg1;
- (void)animationTimerFired:(unsigned long long)arg1;

@end
