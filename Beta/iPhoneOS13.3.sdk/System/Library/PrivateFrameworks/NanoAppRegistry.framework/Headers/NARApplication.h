/*
 Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

#import <Foundation/NSObject.h>

@class NARApplicationState, NARGlance, NSArray, NSDictionary, NSString;

@interface NARApplication : NSObject

{
    _Bool _supportsForegroundApplication;
    unsigned long long _sequenceNumber;
    NSString *_launchServicesBundleType;
    NSString *_parentApplicationBundleIdentifier;
    NSArray *_appTags;
    NARApplicationState *_appState;
    NSDictionary *_infoPlist;
    NSDictionary *_localizedStrings;
    NSDictionary *_iTunesPlistStrings;
}

@property (retain, nonatomic) NSDictionary *infoPlist;
@property (retain, nonatomic) NSDictionary *localizedStrings;
@property (retain, nonatomic) NSDictionary *iTunesPlistStrings;
@property (retain, nonatomic) NSArray *appTags;
@property (nonatomic) unsigned long long sequenceNumber;
@property (copy, nonatomic) NSString *launchServicesBundleType;
@property (nonatomic) _Bool supportsForegroundApplication;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *bundleName;
@property (nonatomic, readonly) NSDictionary *localizedBundleNames;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSDictionary *localizedDisplayNames;
@property (nonatomic, readonly) NSArray *supportedSchemes;
@property (nonatomic, readonly) NSString *vendorName;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSArray *localizations;
@property (copy, nonatomic, readonly) NSString *parentApplicationBundleIdentifier;
@property (nonatomic, readonly) _Bool isHidden;
@property (nonatomic, readonly) NARGlance *glance;
@property (retain, nonatomic) NARApplicationState *appState;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;

@end
