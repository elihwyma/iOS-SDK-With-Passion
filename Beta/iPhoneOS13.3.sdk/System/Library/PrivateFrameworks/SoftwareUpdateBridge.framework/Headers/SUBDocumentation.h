/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, NSURL;

@interface SUBDocumentation : NSObject

{
    NSURL *_documentationBundleURL;
    NSData *_releaseNotesSummary;
    NSData *_releaseNotes;
    NSData *_licenseAgreement;
    NSString *_humanReadableUpdateName;
    NSString *_phoneLanguage;
}

@property (retain, nonatomic) NSURL *documentationBundleURL;
@property (retain, nonatomic) NSData *releaseNotesSummary;
@property (retain, nonatomic) NSData *releaseNotes;
@property (retain, nonatomic) NSData *licenseAgreement;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic, readonly) NSString *currentPhoneLanguage;
@property (retain, nonatomic) NSString *phoneLanguage;
@property (retain, nonatomic, readonly) NSArray *preferredPhoneLanguages;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_loadBundleResources;
- (id)_resourceFromBundle:(id)arg1 forKey:(id)arg2;
- (id)initWithDocumentationBundleURL:(id)arg1;

@end
