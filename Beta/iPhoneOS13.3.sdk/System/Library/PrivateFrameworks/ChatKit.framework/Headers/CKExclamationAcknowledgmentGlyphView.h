/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView

{
    CKAcknowledgmentGlyphImageView *_leftExclamationGlyph;
    CKAcknowledgmentGlyphImageView *_rightExclamationGlyph;
}

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *leftExclamationGlyph;
@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *rightExclamationGlyph;

- (void)layoutSubviews;
- (double)animationDuration;
- (void)setGlyphColor:(id)arg1;
- (struct CGPoint)glyphOffset;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)acknowledgmentType;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;

@end
