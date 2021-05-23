/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICAttachmentBrickImageViewV2.h>

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2

{
    CALayer *_borderLayer;
    CALayer *_effectsLayer;
}

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) CALayer *effectsLayer;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)updateSublayersBounds:(struct CGRect)arg1;

@end
