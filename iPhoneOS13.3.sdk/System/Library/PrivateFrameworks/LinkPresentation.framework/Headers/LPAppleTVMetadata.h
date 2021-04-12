//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataPresentationTransformer-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformer-Protocol.h>

@class LPImage, NSString;

@interface LPAppleTVMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer>
{
    NSString *_title;
    NSString *_subtitle;
    LPImage *_artwork;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* CDUnknownBlockType */)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;

@end

