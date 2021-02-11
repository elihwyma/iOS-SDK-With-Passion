/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkMetadataPresentationTransformer : NSObject {
    NSURL * _URL;
    bool  _allowsTapToLoad;
    bool  _complete;
    LPLinkMetadata * _metadata;
    unsigned long long  _preferredSizeClass;
    double  _scaleFactor;
    NSString * _sourceBundleIdentifier;
    LPImage * _sourceContextIcon;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool allowsTapToLoad;
@property (nonatomic, readonly, copy) NSURL *canonicalURL;
@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, readonly) bool hasMedia;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic, readonly, copy) NSURL *originalURL;
@property (nonatomic) unsigned long long preferredSizeClass;
@property (nonatomic) double scaleFactor;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) LPImage *sourceContextIcon;

- (void).cxx_destruct;
- (id)URL;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3;
- (void)_populateProperties:(id)arg1 withPrimaryImage:(id)arg2;
- (bool)_prefersIconAsImage;
- (bool)_prefersImageAsIconWithStyle:(long long)arg1;
- (bool)_prefersLeadingIconWithStyle:(long long)arg1;
- (unsigned long long)_rowConfiguration;
- (bool)allowsTapToLoad;
- (id)audioForStyle:(long long)arg1;
- (id)backgroundColorForStyle:(long long)arg1;
- (id)canonicalURL;
- (id)commonPresentationPropertiesForStyle:(long long)arg1;
- (bool)hasMedia;
- (id)imageForStyle:(long long)arg1 icon:(id*)arg2 alternateImages:(id*)arg3;
- (id)init;
- (bool)isComplete;
- (id)mainCaptionBarForStyle:(long long)arg1;
- (id)metadata;
- (id)originalURL;
- (unsigned long long)preferredSizeClass;
- (id)presentationProperties;
- (id)quotedTextForStyle:(long long)arg1;
- (long long)rendererStyle;
- (double)scaleFactor;
- (void)setAllowsTapToLoad:(bool)arg1;
- (void)setComplete:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPreferredSizeClass:(unsigned long long)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setSourceContextIcon:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sourceBundleIdentifier;
- (id)sourceContextIcon;
- (id)subtitleForStyle:(long long)arg1;
- (id)titleForStyle:(long long)arg1;
- (id)unspecializedPresentationProperties;
- (id)unspecializedPresentationPropertiesForStyle:(long long)arg1;
- (id)videoForStyle:(long long)arg1;

@end