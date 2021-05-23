/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMHTMLDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <Swift>

{
    HMHTMLDocument *_releaseNotesSummary;
    HMHTMLDocument *_releaseNotes;
    HMHTMLDocument *_licenseAgreement;
    NSNumber *_licenseAgreementVersion;
}

@property (copy, readonly) HMHTMLDocument *releaseNotesSummary;
@property (copy, readonly) HMHTMLDocument *releaseNotes;
@property (copy, readonly) HMHTMLDocument *licenseAgreement;
@property (copy, readonly) NSNumber *licenseAgreementVersion;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4;

@end
