/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUItemCellContext.h>

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext

{
    long long _pendingWebViewLoads;
    NSString *_stylesheet;
    struct __CFDictionary *_webViewCache;
    double _webViewWidth;
}

@property (retain, nonatomic) NSString *stylesheet;
@property (nonatomic) double webViewWidth;

- (void)dealloc;
- (void)webViewDidFinishLoading:(id)arg1;
- (id)webViewForMarkup:(id)arg1;

@end
