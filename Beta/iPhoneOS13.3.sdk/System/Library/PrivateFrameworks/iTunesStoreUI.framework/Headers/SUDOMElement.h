/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class DOMElement, NSString, UIImage, UIWebView;

@interface SUDOMElement : NSObject

{
    DOMElement *_element;
    UIImage *_image;
    UIWebView *_webView;
}

@property (nonatomic, readonly) DOMElement *element;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) UIImage *imageRepresentation;
@property (nonatomic, readonly) NSString *innerText;
@property (retain, nonatomic) UIWebView *webView;

+ (struct CGRect)frameForDOMElement:(id)arg1;

- (void)dealloc;
- (struct CGRect)_frame;
- (id)initWithDOMElement:(id)arg1;
- (id)newLabelForElementWithText:(id)arg1;
- (id)newImageView;
- (void)setProperty:(id)arg1 value:(id)arg2;

@end
