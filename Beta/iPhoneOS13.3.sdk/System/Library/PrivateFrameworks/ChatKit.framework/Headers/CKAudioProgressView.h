/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonImageView.h>

@class IMManualUpdater;

__attribute__((visibility("hidden")))
@interface CKAudioProgressView : CKBalloonImageView

{
    _Bool _playing;
    _Bool _played;
    BOOL _color;
    float _progress;
    int _style;
    IMManualUpdater *_displayUpdater;
}

@property (retain, nonatomic) IMManualUpdater *displayUpdater;
@property (nonatomic) float progress;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, getter=isPlayed) _Bool played;
@property (nonatomic) BOOL color;
@property (nonatomic) int style;

+ (float)progressForTime:(double)arg1 duration:(double)arg2;
+ (id)imageWithType:(unsigned char)arg1 color:(BOOL)arg2;
+ (id)templateImageWithType:(unsigned char)arg1;
+ (id)templateImageWithControlImage:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)setNeedsPrepareForDisplay;

@end
