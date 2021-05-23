/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class LPImage, LPVideo, NSArray, NSString;

@interface LPiTunesMediaSoftwareMetadata : LPSpecializationMetadata

{
    _Bool _isMessagesOnlyApp;
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_subtitle;
    NSString *_genre;
    NSString *_platform;
    LPImage *_icon;
    NSArray *_screenshots;
    LPVideo *_previewVideo;
    LPImage *_messagesAppIcon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) LPImage *icon;
@property (copy, nonatomic) NSArray *screenshots;
@property (retain, nonatomic) LPVideo *previewVideo;
@property (nonatomic) _Bool isMessagesOnlyApp;
@property (retain, nonatomic) LPImage *messagesAppIcon;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)storeIdentifierForTransformer:(id)arg1;

@end
