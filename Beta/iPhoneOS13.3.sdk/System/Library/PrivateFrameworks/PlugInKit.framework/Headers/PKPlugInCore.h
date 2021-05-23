/*
 Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject

{
    NSString *_identifier;
    NSString *_originalIdentifier;
    NSURL *_url;
    NSURL *_containingUrl;
    NSString *_containingBundleIdentifier;
    _Bool _onSystemVolume;
    NSDictionary *_bundleInfoDictionary;
    NSDictionary *_plugInDictionary;
    NSDictionary *_entitlements;
    unsigned long long _hubProtocolVersion;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_localizedContainingName;
    NSDictionary *_localizedFileProviderActionNames;
    NSDictionary *_annotations;
    long long _lastModified;
    NSUUID *_uuid;
    NSData *_cdhash;
    NSString *_requirement;
    NSURL *_dataContainerURL;
    NSUUID *_discoveryInstanceUUID;
}

@property (retain) NSString *identifier;
@property (retain) NSString *originalIdentifier;
@property (retain) NSURL *url;
@property (retain) NSDictionary *bundleInfoDictionary;
@property (retain) NSDictionary *plugInDictionary;
@property (retain) NSDictionary *entitlements;
@property (retain) NSDictionary *annotations;
@property (copy) NSURL *containingUrl;
@property (copy) NSString *containingBundleIdentifier;
@property (readonly) _Bool oldStyle;
@property (readonly) NSString *path;
@property (readonly) NSString *containingPath;
@property _Bool onSystemVolume;
@property (readonly) NSUUID *discoveryInstanceUUID;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *version;
@property (readonly) id protocolSpec;
@property (readonly) NSString *principalSpec;
@property unsigned long long hubProtocolVersion;
@property (readonly) NSString *sdkSpec;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (retain) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long lastModified;
@property (readonly) NSDate *timestamp;
@property (retain) NSUUID *uuid;
@property (retain) NSData *cdhash;
@property (retain) NSString *requirement;
@property (readonly) _Bool isAppExtension;
@property (readonly) _Bool isMultiplexed;
@property (readonly) _Bool isHybrid;
@property (readonly) _Bool isDedicated;
@property (readonly) _Bool isData;
@property (nonatomic, readonly) NSURL *dataContainerURL;

+ (id)readSDKDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)useBundle:(id)arg1 error:(id *)arg2;
- (void)localizedInfoDictionaryForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithForm:(id)arg1;
- (void)setAnnotation:(id)arg1 value:(id)arg2;
- (void)updateFromForm:(id)arg1;
- (id)diagnose;
- (id)infoKey:(id)arg1;
- (id)augmentInterface:(id)arg1;
- (_Bool)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(struct NSMutableDictionary *)arg6;
- (_Bool)setupWithForm:(id)arg1;
- (id)normalizeInfoDictionary:(id)arg1;
- (id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(struct NSMutableDictionary *)arg2;
- (_Bool)setDictionaries:(id)arg1;
- (void)canonicalize;
- (id)attribute:(id)arg1;
- (id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(struct NSMutableDictionary *)arg2;
- (id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2;
- (struct NSSet *)sdkOnlyKeyPaths;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (id)pluginKey:(id)arg1;
- (void)_loadLocalizedNames;
- (id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2;
- (id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(struct NSMutableDictionary *)arg6;
- (id)export:(id *)arg1;
- (id)embeddedCodePath;
- (id)embeddedProtocolSpec;

@end
