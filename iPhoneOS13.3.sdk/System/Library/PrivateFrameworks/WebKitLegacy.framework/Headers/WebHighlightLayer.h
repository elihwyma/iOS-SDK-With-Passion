//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class WebNodeHighlightView, WebView;

__attribute__((visibility("hidden")))
@interface WebHighlightLayer : CALayer
{
    WebNodeHighlightView *_view;
    WebView *_webView;
}

- (id)actionForKey:(id)arg1;
- (void)layoutSublayers;
- (id)initWithHighlightView:(id)arg1 webView:(id)arg2;

@end

