/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <TVRemoteUI/TVRTouchProcessor.h>

@class UITapGestureRecognizer, _TVRMatchPointArtworkView;

@interface TVRMatchPointTouchProcessor : TVRTouchProcessor

{
    _TVRMatchPointArtworkView *_artworkView;
    UITapGestureRecognizer *_tapGesture;
    long long _highlightedButtonType;
}

@property (retain, nonatomic) _TVRMatchPointArtworkView *artworkView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) long long highlightedButtonType;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_handleTap:(id)arg1;
- (id)_artworkView;
- (void)setTouchpadView:(id)arg1;
- (long long)_pressTypeForLocationInTouchpadView:(struct CGPoint)arg1;
- (void)_sendButtonPressToDelegate:(long long)arg1;

@end
