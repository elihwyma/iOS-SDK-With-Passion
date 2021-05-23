/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

@class CKAnimatedImage, CKBalloonImageView, NSArray, NSString, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell

{
    CKBalloonImageView *_imageView;
    UIImage *_image;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) CKBalloonImageView *imageView;
@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)associatedStickerXOriginForStickerFrame:(struct CGRect)arg1 parentSize:(struct CGSize)arg2 contentAlignmentRect:(struct CGRect)arg3 orientation:(BOOL)arg4 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg5 outBalloonOffset:(double *)arg6;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)updateAnimationTimerObserving;
- (void)doubleTapGestureRecognized:(id)arg1;
- (void)longPressGestureRecognized:(id)arg1;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)performHide:(CDUnknownBlockType)arg1;
- (void)performReveal:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
