/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class DOMDocument, DOMDocumentFragment, DOMElement, LPCSSResolver, LPCaptionBarPresentationProperties, LPHTMLComponent, LPHTMLVideoComponent, LPImage, LPImagePresentationProperties, LPLinkMetadata, LPMetadataProvider, LPPointUnit, LPTheme, LPVideo, NSArray, NSString, NSURL, UIColor;

@protocol LPLinkHTMLGeneratorDelegate;

@interface LPLinkHTMLGenerator : NSObject

{
    LPMetadataProvider *_pendingMetadataProvider;
    _Bool _mayReceiveAdditionalMetadata;
    _Bool _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    UIColor *_backgroundColor;
    LPPointUnit *_minimumRootHeight;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    LPHTMLVideoComponent *_videoComponent;
    _Bool _everBuiltView;
    _Bool _useVariablesWhenUsingInlineStyles;
    _Bool _includeClassNamesWhenUsingInlineStyles;
    _Bool _includeDarkInterfaceInlineStyles;
    _Bool _allowsTapToLoad;
    _Bool _useInlineStyles;
    _Bool _applyCornerRadiusToLink;
    _Bool _generateEmailCompatibleMarkup;
    _Bool _isPreliminary;
    id <LPLinkHTMLGeneratorDelegate> _delegate;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    DOMDocument *_parentDocument;
    LPCSSResolver *_cssResolver;
    long long _style;
    LPTheme *_theme;
}

@property (nonatomic, readonly) DOMDocument *parentDocument;
@property (nonatomic, readonly) LPCSSResolver *cssResolver;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) LPTheme *theme;
@property (nonatomic, readonly) _Bool isPreliminary;
@property (nonatomic, readonly) _Bool delegateRespondsToURLForResource;
@property (nonatomic, readonly) _Bool useFlexibleWidth;
@property (nonatomic, readonly) _Bool hasTallMedia;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) LPPointUnit *rootWidth;
@property (nonatomic, readonly) LPPointUnit *minimumRootHeight;
@property (nonatomic, readonly) _Bool hasPendingMetadataProvider;
@property (nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) _Bool _useVariablesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) _Bool _includeClassNamesWhenUsingInlineStyles;
@property (nonatomic, setter=_setIncludeDarkInterfaceInlineStyles:) _Bool _includeDarkInterfaceInlineStyles;
@property (nonatomic, setter=_setAllowsTapToLoad:) _Bool _allowsTapToLoad;
@property (nonatomic, readonly) _Bool _canTapToLoad;
@property (weak, nonatomic) id <LPLinkHTMLGeneratorDelegate> delegate;
@property (retain, nonatomic, readonly) DOMDocumentFragment *documentFragment;
@property (nonatomic) _Bool useInlineStyles;
@property (nonatomic) _Bool applyCornerRadiusToLink;
@property (nonatomic) _Bool generateEmailCompatibleMarkup;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic, readonly) NSURL *URL;

+ (void)initialize;

- (id)init;
- (id)_URLForImage:(id)arg1;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (void)_fetchMetadata;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (void)_setPresentationProperties:(id)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(_Bool)arg2;
- (void)_rebuildView;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createMediaTopCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createRootElement;
- (void)clearCurrentLayout;
- (void)injectCSSIfNeeded;
- (id)_createMediaComponent;
- (id)_createQuoteComponent;
- (id)_createCaptionBar;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
- (void)_didFollowLink;

@end
