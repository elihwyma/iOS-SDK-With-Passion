/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIWebView.h>

@class NSString, UIColor, UIView;

@protocol SUWebViewDelegate;

@interface SUWebView : UIWebView

{
    _Bool _isPinned;
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    double _pinnedHeaderInsetAdjustment;
    UIView *_pinnedHeaderView;
    unsigned int _scrollingDisabled:1;
    _Bool _showsTopBackgroundShadow;
    long long _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property (nonatomic) id <SUWebViewDelegate> delegate;
@property (nonatomic, getter=isScrollingEnabled) _Bool scrollingEnabled;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) _Bool showsTopBackgroundShadow;
@property (retain, nonatomic) UIColor *topBackgroundColor;
@property (nonatomic, readonly) id windowScriptObject;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadArchive:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)view:(id)arg1 didSetFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3;
- (void)_setRichTextReaderViewportSettings;
- (void)beginSynchronousLayout;
- (void)endSynchronousLayout;
- (_Bool)getStatusBarStyle:(long long *)arg1;
- (void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(double)arg2;

@end
