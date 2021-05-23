/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface FPDProviderDescriptor : NSObject

{
    _Bool _readonly;
    _Bool _enabledByDefault;
    _Bool _supportsEnumeration;
    _Bool _defaultDomainVisible;
    _Bool _shouldHideExtensionName;
    _Bool _canToggleDomainVisibility;
    _Bool _isAvailableSystemWide;
    _Bool _usesUniqueItemIdentifiersAcrossDevices;
    _Bool _supportsUnzippedPackages;
    _Bool _hasExplicitExtensionStorageURLs;
    _Bool _supportsPickingFolders;
    _Bool _owningApplicationIsManaged;
    NSString *_identifier;
    NSString *_localizedName;
    NSString *_topLevelBundleIdentifier;
    NSString *_bundleVersion;
    NSString *_extensionPointVersion;
    NSString *_purposeIdentifier;
    NSURL *_extensionBundleURL;
    NSArray *_supportedFileTypes;
    NSArray *_supportedSearchFilters;
    NSArray *_extensionStorageURLs;
    NSArray *_requestedExtendedAttributes;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *topLevelBundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *extensionPointVersion;
@property (nonatomic) _Bool readonly;
@property (nonatomic) _Bool enabledByDefault;
@property (nonatomic) _Bool supportsEnumeration;
@property (nonatomic) _Bool defaultDomainVisible;
@property (nonatomic) _Bool shouldHideExtensionName;
@property (nonatomic) _Bool canToggleDomainVisibility;
@property (nonatomic) _Bool isAvailableSystemWide;
@property (nonatomic) _Bool usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic) _Bool supportsUnzippedPackages;
@property (nonatomic) _Bool hasExplicitExtensionStorageURLs;
@property (nonatomic) _Bool supportsPickingFolders;
@property (nonatomic) _Bool owningApplicationIsManaged;
@property (retain, nonatomic) NSString *purposeIdentifier;
@property (retain, nonatomic) NSURL *extensionBundleURL;
@property (retain, nonatomic) NSArray *supportedFileTypes;
@property (retain, nonatomic) NSArray *supportedSearchFilters;
@property (retain, nonatomic) NSArray *extensionStorageURLs;
@property (retain, nonatomic) NSArray *requestedExtendedAttributes;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end
