/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIWebDocumentView.h>

@class NSString;

@interface SUWebDocumentView : UIWebDocumentView

{
    id _loadDelegate;
    NSString *_stylesheet;
    unsigned int _adjustHeightToFit:1;
}

@property (nonatomic) id loadDelegate;
@property (retain, nonatomic) NSString *stylesheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPlaintextString:(id)arg1;
- (void)setHTMLFragment:(id)arg1;

@end
