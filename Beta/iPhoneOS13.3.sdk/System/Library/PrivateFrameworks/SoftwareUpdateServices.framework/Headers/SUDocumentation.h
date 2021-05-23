/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SUDocumentation : NSObject

{
    NSURL *_baseDocumentationURL;
    NSString *_releaseNotesSummaryFileName;
    NSString *_releaseNotesFileName;
    NSString *_licenseAgreementFileName;
    NSString *_primaryLanguage;
    NSNumber *_slaVersion;
    NSString *_humanReadableUpdateName;
    NSURL *_releaseNotesSummaryURL;
    NSURL *_releaseNotesURL;
    NSURL *_licenseAgreementURL;
    NSMutableDictionary *_cachedData;
}

@property (retain, nonatomic) NSURL *baseDocumentationURL;
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName;
@property (retain, nonatomic) NSString *licenseAgreementFileName;
@property (retain, nonatomic) NSString *releaseNotesFileName;
@property (retain, nonatomic) NSString *primaryLanguage;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSURL *releaseNotesSummaryURL;
@property (retain, nonatomic) NSURL *releaseNotesURL;
@property (retain, nonatomic) NSURL *licenseAgreementURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)releaseNotes;
- (id)licenseAgreement;
- (id)releaseNotesSummary;
- (void)_resetIfNecessary;
- (id)_cachedDocumentationDataForURL:(id)arg1;
- (id)_getSUImage:(id)arg1;
- (id)pngImageDataFromBundle:(struct __CFBundle *)arg1 fileName:(id)arg2;
- (id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2;
- (id)localizedDocumentationStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (void)_clearTransientDocumentationData;
- (id)localizedStringFromBundle:(struct __CFBundle *)arg1 key:(id)arg2;
- (id)localizedURLFromBundle:(struct __CFBundle *)arg1 resource:(id)arg2;
- (id)initWithDocumentationURL:(id)arg1;
- (_Bool)hasAnyDocumentation;
- (id)getIconImage;
- (id)getFullWidthImage;

@end
