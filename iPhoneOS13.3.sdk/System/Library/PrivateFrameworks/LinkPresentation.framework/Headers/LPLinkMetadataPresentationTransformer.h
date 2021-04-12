//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPImage, LPLinkMetadata, NSString, NSURL;

@interface LPLinkMetadataPresentationTransformer : NSObject
{
    BOOL _complete;
    BOOL _allowsTapToLoad;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    NSUInteger _preferredSizeClass;
    LPImage *_sourceContextIcon;
    NSString *_sourceBundleIdentifier;
    double _scaleFactor;
}

@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) LPImage *sourceContextIcon; // @synthesize sourceContextIcon=_sourceContextIcon;
@property(nonatomic) NSUInteger preferredSizeClass; // @synthesize preferredSizeClass=_preferredSizeClass;
@property(nonatomic) BOOL allowsTapToLoad; // @synthesize allowsTapToLoad=_allowsTapToLoad;
@property(nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
// - (void).cxx_destruct;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2 iconProperties:(id)arg3;
- (void)_populateProperties:(id)arg1 withPrimaryIcon:(id)arg2;
- (void)_populateProperties:(id)arg1 withPrimaryImage:(id)arg2;
- (BOOL)_prefersLeadingIconWithStyle:(long long)arg1;
- (BOOL)_prefersImageAsIconWithStyle:(long long)arg1;
- (BOOL)_prefersIconAsImage;
- (NSUInteger)_rowConfiguration;
@property(readonly, nonatomic) BOOL hasMedia;
- (id)presentationProperties;
- (id)unspecializedPresentationPropertiesForStyle:(long long)arg1;
- (id)unspecializedPresentationProperties;
- (id)commonPresentationPropertiesForStyle:(long long)arg1;
- (id)backgroundColorForStyle:(long long)arg1;
- (id)audioForStyle:(long long)arg1;
- (id)videoForStyle:(long long)arg1;
- (id)imageForStyle:(long long)arg1 icon:(id )arg2 alternateImages:(id )arg3;
- (id)quotedTextForStyle:(long long)arg1;
- (id)subtitleForStyle:(long long)arg1;
- (id)titleForStyle:(long long)arg1;
- (id)mainCaptionBarForStyle:(long long)arg1;
- (long long)rendererStyle;
@property(readonly, copy, nonatomic) NSURL *canonicalURL;
@property(readonly, copy, nonatomic) NSURL *originalURL;
- (id)init;

@end

