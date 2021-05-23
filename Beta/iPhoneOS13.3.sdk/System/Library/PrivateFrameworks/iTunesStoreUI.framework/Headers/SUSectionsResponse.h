/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSItemImageCollection, SUClientInterface, UIImage;

@interface SUSectionsResponse : NSObject

{
    _Bool _cacheable;
    SUClientInterface *_clientInterface;
    UIImage *_moreListImage;
    UIImage *_moreListSelectedImage;
    NSMutableDictionary *_rawResponseDictionary;
    long long _responseType;
    NSMutableDictionary *_sectionsCache;
    NSNumber *_shouldResetUserOrdering;
}

@property (nonatomic, readonly) NSArray *allSections;
@property (nonatomic, getter=isCacheable) _Bool cacheable;
@property (nonatomic) _Bool shouldResetUserOrdering;
@property (retain, nonatomic) UIImage *moreListImage;
@property (nonatomic, readonly) SSItemImageCollection *moreListImageCollection;
@property (retain, nonatomic) UIImage *moreListSelectedImage;
@property (nonatomic, readonly) NSString *moreListTitle;
@property (copy, nonatomic, readonly) NSDictionary *rawResponseDictionary;
@property (nonatomic, readonly) long long responseType;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSDictionary *sectionsDictionary;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (nonatomic, readonly) NSString *versionString;

+ (id)sectionsCacheDirectory;
+ (void)setLastCachedVersionIdentifier:(id)arg1;
+ (id)lastCachedVersionIdentifier;

- (id)init;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1 cacheDirectory:(id)arg2;
- (_Bool)writeToCacheDirectory:(id)arg1 error:(id *)arg2;
- (id)initWithClientInterface:(id)arg1 sectionsDictionary:(id)arg2 responseType:(long long)arg3;
- (void)dropEmbeddedImages;
- (_Bool)_loadArtworkFromCacheDirectory:(id)arg1;
- (id)_newSectionsFromDictionary:(id)arg1;
- (void)_dropImageKeysFromDictionary:(id)arg1;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (void)_writeButtonImagesForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (void)_dropImageKeysFromArray:(id)arg1;
- (id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3;
- (void)_loadButtonArtworkForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (id)_newVariantStringForButton:(id)arg1;
- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;

@end
