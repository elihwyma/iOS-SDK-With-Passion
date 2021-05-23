/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManifestDownload, NSData, NSDictionary, NSError, NSString;

@interface GEOEnvironmentInfo : NSObject

{
    NSString *_name;
    NSString *_displayName;
    NSString *_releaseName;
    long long _state;
    NSData *_manifestData;
    NSError *_lastLoadingError;
    NSDictionary *_originalDictionaryRepresentation;
}

@property (nonatomic, readonly) NSError *lastLoadingError;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *releaseName;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) GEOResourceManifestDownload *resourceManifest;

- (_Bool)isActive;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;
- (void)reloadManifestDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)urlDictionary;
- (id)_manifestURLString;
- (void)makeActive;
- (void)updateWithURLs:(id)arg1;
- (id)serviceURLs;
- (id)overrideURLs;
- (id)useProxyAuth;

@end
