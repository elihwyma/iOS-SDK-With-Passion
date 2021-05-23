/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetViewProxy.h>

@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy

{
    OKRoundProgressView *_roundProgressView;
}

- (void)dealloc;
- (void)commonInit;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (_Bool)isActivityIndicatorVisible;
- (_Bool)downloadIndicatorEnabled;
- (_Bool)_canRespondToEventWithPoint:(struct CGPoint)arg1;
- (void)updateProgressIndicator:(double)arg1;

@end
