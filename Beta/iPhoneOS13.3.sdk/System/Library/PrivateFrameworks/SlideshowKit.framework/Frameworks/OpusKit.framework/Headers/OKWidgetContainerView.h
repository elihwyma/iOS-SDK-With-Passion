/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIView.h>

@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView

{
    OKWidgetView *_widgetView;
}

@property (nonatomic) OKWidgetView *widgetView;

- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
