/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPImage, LPLinkMetadata, NSString, NSURL;

@interface LPLinkMetadataPresentationTransformer : NSObject

{
    _Bool _complete;
    _Bool _allowsTapToLoad;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    unsigned long long _preferredSizeClass;
    LPImage *_sourceContextIcon;
    NSString *_sourceBundleIdentifier;
    double _scaleFactor;
}

@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic) _Bool allowsTapToLoad;
@property (nonatomic) unsigned long long preferredSizeClass;
@property (retain, nonatomic) LPImage *sourceContextIcon;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic, readonly) NSURL *originalURL;
@property (copy, nonatomic, readonly) NSURL *canonicalURL;
@property (nonatomic, readonly) _Bool hasMedia;

- (id)init;
- (id)presentationProperties;
- (id)commonPresentationPropertiesForStyle:(long long)arg1;
- (void)_populateProperties:(id)arg1 withPrimaryImage:(id)arg2;
- (unsigned long long)_rowConfiguration;
- (id)unspecializedPresentationProperties;
- (id)unspecializedPresentationPropertiesForStyle:(long long)arg1;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3;
- (_Bool)_prefersImageAsIconWithStyle:(long long)arg1;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2;
- (id)titleForStyle:(long long)arg1;
- (id)subtitleForStyle:(long long)arg1;
- (id)videoForStyle:(long long)arg1;
- (id)quotedTextForStyle:(long long)arg1;
- (long long)rendererStyle;
- (id)mainCaptionBarForStyle:(long long)arg1;
- (id)backgroundColorForStyle:(long long)arg1;
- (id)imageForStyle:(long long)arg1 icon:(id *)arg2 alternateImages:(id *)arg3;
- (_Bool)_prefersLeadingIconWithStyle:(long long)arg1;
- (id)audioForStyle:(long long)arg1;
- (_Bool)_prefersIconAsImage;

@end
