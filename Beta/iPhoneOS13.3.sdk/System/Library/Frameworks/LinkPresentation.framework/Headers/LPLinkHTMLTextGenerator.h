/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPLinkHTMLGenerator, LPLinkMetadata, NSString, NSURL, WebView;

@protocol LPLinkHTMLTextGeneratorDelegate;

@interface LPLinkHTMLTextGenerator : NSObject

{
    WebView *_webView;
    LPLinkHTMLGenerator *_DOMGenerator;
    NSString *_generatedFragmentText;
    id <LPLinkHTMLTextGeneratorDelegate> _delegate;
}

@property (weak, nonatomic) id <LPLinkHTMLTextGeneratorDelegate> delegate;
@property (nonatomic) _Bool generateEmailCompatibleMarkup;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSString *HTMLFragmentString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)linkHTMLGenerator:(id)arg1 URLForResource:(id)arg2 withMIMEType:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (void)_commonInitWithPresentationProperties:(id)arg1 URL:(id)arg2;

@end
