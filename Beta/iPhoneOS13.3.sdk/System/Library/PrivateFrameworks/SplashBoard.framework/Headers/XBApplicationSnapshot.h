/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString, UIImage, XBApplicationSnapshotGenerationContext, XBDisplayEdgeInsetsWrapper, XBSnapshotContainerIdentity, XBStatusBarSettings;

@protocol XBSnapshotManifestStore;

@interface XBApplicationSnapshot : NSObject

{
    XBSnapshotContainerIdentity *_containerIdentity;
    id <XBSnapshotManifestStore> _store;
    NSMutableDictionary *_variantsByID;
    NSString *_identifier;
    NSString *_logIdentifier;
    NSString *_groupID;
    NSString *_variantID;
    NSString *_launchInterfaceIdentifier;
    NSString *_name;
    NSString *_scheme;
    NSString *_requiredOSVersion;
    NSString *_path;
    NSString *_filename;
    NSString *_relativePath;
    long long _fileLocation;
    NSDate *_creationDate;
    NSDate *_lastUsedDate;
    NSDate *_expirationDate;
    struct CGSize _referenceSize;
    struct CGRect _contentFrame;
    long long _interfaceOrientation;
    long long _userInterfaceStyle;
    long long _contentType;
    long long _fileFormat;
    double _imageScale;
    long long _imageOrientation;
    XBStatusBarSettings *_statusBarSettings;
    long long _classicMode;
    long long _compatibilityMode;
    long long _backgroundStyle;
    XBApplicationSnapshotGenerationContext *_generationContext;
    UIImage *_cachedImage;
    unsigned long long _imageAccessCount;
    NSDictionary *_extendedData;
    _Bool _invalidated;
    _Bool _fullScreen;
    _Bool _imageOpaque;
    _Bool _keepImageAccessUntilExpiration;
    _Bool _keepImageAccessForPreHeat;
    _Bool _hasProtectedContent;
    struct os_unfair_lock_s _loadImageLock;
    XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets;
    CDUnknownBlockType _imageGenerator;
    struct CGAffineTransform _imageTransform;
}

@property (copy, nonatomic, readonly) NSString *_sortableLaunchInterfaceIdentifier;
@property (copy, nonatomic, readonly) NSString *_sortableRequiredOSVersion;
@property (copy, nonatomic, readonly) NSString *_sortableName;
@property (copy, nonatomic, readonly) NSString *_sortableScheme;
@property (retain, nonatomic, readonly) XBStatusBarSettings *_sortableStatusBarSettings;
@property (nonatomic, readonly) unsigned long long _interfaceOrientationMask;
@property (nonatomic, readonly) unsigned long long _contentTypeMask;
@property (copy) XBSnapshotContainerIdentity *containerIdentity;
@property (copy, nonatomic, getter=_relativePath, setter=_setRelativePath:) NSString *relativePath;
@property (copy, nonatomic, setter=_setPath:) NSString *path;
@property (copy, nonatomic, getter=filename, setter=_setFilename:) NSString *filename;
@property (nonatomic, readonly, getter=_store) id <XBSnapshotManifestStore> store;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic) long long fileLocation;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier;
@property (nonatomic) double imageScale;
@property (nonatomic, getter=isImageOpaque) _Bool imageOpaque;
@property (nonatomic) struct CGAffineTransform imageTransform;
@property (nonatomic) long long imageOrientation;
@property (copy, nonatomic) CDUnknownBlockType imageGenerator;
@property (nonatomic, readonly) XBApplicationSnapshotGenerationContext *generationContext;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *groupID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *requiredOSVersion;
@property (nonatomic, readonly) _Bool fileExists;
@property (nonatomic, readonly) long long fileFormat;
@property (nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (nonatomic) long long contentType;
@property (nonatomic, getter=isFullScreen) _Bool fullScreen;
@property (nonatomic) struct CGSize referenceSize;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic, readonly) _Bool hasFullSizedContent;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (copy, nonatomic) XBStatusBarSettings *statusBarSettings;
@property (nonatomic) long long classicMode;
@property (nonatomic) long long compatibilityMode;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (copy) NSDictionary *extendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidImageFileExtension:(id)arg1;
+ (struct CGImage *)_createCGImageWithPreferredOptions:(id)arg1 fromCGImage:(struct CGImage *)arg2;
+ (id)_allSecureCodingClassesIncludingDefaultAndClientSpecified;
+ (id)normalizeSnapshotName:(id)arg1;
+ (id)secureCodableCustomExtendedDataClasses;
+ (void)setSecureCodableCustomExtendedDataClasses:(id)arg1;
+ (id)dataForImage:(id)arg1 withFormat:(long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)_invalidate;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)_isInvalidated;
- (struct CGRect)_referenceBounds;
- (id)_cachedImage;
- (void)loadImage;
- (id)variants;
- (long long)_fileLocation;
- (_Bool)hasCachedImage;
- (void)beginImageAccess;
- (void)endImageAccess;
- (id)_initWithContainerIdentity:(id)arg1 store:(id)arg2 groupID:(id)arg3 generationContext:(id)arg4;
- (void)_commonInitWithIdentifier:(id)arg1;
- (void)_snynchronized_evaluateImageAccessUntilExpirationEnablingIfNecessary:(_Bool)arg1;
- (_Bool)_synchronized_isExpired;
- (id)cachedImageForInterfaceOrientation:(long long)arg1;
- (void)_beginPreHeatImageAccess;
- (void)_endPreHeatImageAccess;
- (void)_purgeCachedImageIfAppropriate:(_Bool)arg1;
- (_Bool)_hasGenerationContext;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 includeVariants:(_Bool)arg2;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (_Bool)_path:(id)arg1 isRelativeToPath:(id)arg2 outRelativePath:(id *)arg3;
- (id)_determineRelativePathForPath:(id)arg1 location:(long long *)arg2;
- (_Bool)_shouldDeleteFileOnPurge;
- (_Bool)_validateWithContainerIdentity:(id)arg1;
- (id)variantWithIdentifier:(id)arg1;
- (void)_setFileLocation:(long long)arg1;
- (id)imageForInterfaceOrientation:(long long)arg1;
- (void)loadImageForPreHeat;
- (void)purgeImage;
- (void)beginImageAccessUntilExpiration;
- (id)descriptionWithoutVariants;
- (id)_createVariantWithIdentifier:(id)arg1;
- (id)_configureDefaultPathWithinGroupForFormat:(long long)arg1;
- (void)_configureWithPath:(id)arg1;
- (void)_cacheImage:(id)arg1;
- (void)_setHasProtectedContent:(_Bool)arg1;

@end
