/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString, NSURL, PKContent, PKDataAccessor, PKDisplayProfile, PKImageSet;

@interface PKObject : NSObject <Swift>

{
    PKContent *_content;
    PKImageSet *_imageSets[7];
    struct os_unfair_lock_s _lock;
    _Bool _initializedViaInitWithCoder;
    NSString *_uniqueID;
    NSData *_manifestHash;
    PKDataAccessor *_dataAccessor;
    PKDisplayProfile *_displayProfile;
    double _preferredImageScale;
    NSString *_preferredImageSuffix;
    NSURL *_webServiceURL;
    NSString *_authenticationToken;
    unsigned long long _settings;
    long long _shareCount;
}

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) PKDataAccessor *dataAccessor;
@property (retain, nonatomic) PKDisplayProfile *displayProfile;
@property (nonatomic) double preferredImageScale;
@property (retain, nonatomic) NSString *preferredImageSuffix;
@property (copy, nonatomic) NSURL *webServiceURL;
@property (copy, nonatomic) NSString *authenticationToken;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long shareCount;
@property (nonatomic, readonly) _Bool initializedViaInitWithCoder;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)defaultSettings;
+ (_Bool)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modificationDate;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)content;
- (void)setContent:(id)arg1;
- (id)archiveData;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (void)loadContentSync;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataForBundleResources:(id)arg1;
- (id)serializedFileWrapper;
- (_Bool)remoteAssetsDownloaded;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)contentLoadedIfNeeded;
- (void)noteShared;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithData:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithFileDataAccessor:(id)arg1;
- (id)initWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithFileURL:(id)arg1 validate:(_Bool)arg2 warnings:(id *)arg3 orError:(id *)arg4;
- (_Bool)isContentLoaded;
- (void)flushFormattedFieldValues;
- (_Bool)isImageSetLoaded:(long long)arg1;
- (void)setImageSet:(id)arg1 forImageSetType:(long long)arg2;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageSetSync:(long long)arg1 preheat:(_Bool)arg2;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (void)loadContentAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)flushLoadedContent;
- (void)loadImageSetAsync:(long long)arg1 preheat:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)flushLoadedImageSets;
- (void)updateImageSetForURL:(id)arg1 withCacheURL:(id)arg2;
- (id)localizedString:(id)arg1;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (_Bool)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (void)setMissingImageSetsFromObject:(id)arg1;

@end
