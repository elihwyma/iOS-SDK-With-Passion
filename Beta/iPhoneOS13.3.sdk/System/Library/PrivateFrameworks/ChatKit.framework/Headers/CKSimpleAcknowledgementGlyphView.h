/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView

{
    CKAcknowledgmentGlyphImageView *_glyph;
}

@property (retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph;

- (void)layoutSubviews;
- (double)animationDuration;
- (void)setGlyphColor:(id)arg1;
- (struct CGPoint)glyphOffset;
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;
- (id)glyphImageForType:(long long)arg1 color:(BOOL)arg2;

@end
