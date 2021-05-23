/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <Foundation/NSObject.h>

#import <SoftwareUpdateCore/Swift-Protocol.h>

@class NSData, NSNumber, NSString, NSURL;

@interface SUCoreDocumentation : NSObject <Swift>

{
    NSData *_releaseNotesSummary;
    NSData *_releaseNotes;
    NSData *_licenseAgreement;
    NSString *_humanReadableUpdateName;
    NSNumber *_slaVersion;
    NSURL *_localBundleURL;
    NSURL *_serverAssetURL;
    NSData *_serverAssetMeasurement;
    NSString *_serverAssetAlgorithm;
    long long _serverAssetChunkSize;
    NSString *_language;
    NSString *_releaseNotesSummaryFileName;
    NSString *_releaseNotesFileName;
    NSString *_licenseAgreementFileName;
}

@property (retain, nonatomic) NSData *releaseNotesSummary;
@property (retain, nonatomic) NSData *releaseNotes;
@property (retain, nonatomic) NSData *licenseAgreement;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (retain, nonatomic) NSURL *localBundleURL;
@property (retain, nonatomic) NSURL *serverAssetURL;
@property (retain, nonatomic) NSData *serverAssetMeasurement;
@property (retain, nonatomic) NSString *serverAssetAlgorithm;
@property (nonatomic) long long serverAssetChunkSize;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName;
@property (retain, nonatomic) NSString *releaseNotesFileName;
@property (retain, nonatomic) NSString *licenseAgreementFileName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)summary;
- (id)_resourceFromBundle:(struct __CFBundle *)arg1 forKey:(id)arg2;
- (id)extendProperties;
- (id)initWithDocumentationAsset:(id)arg1;

@end
