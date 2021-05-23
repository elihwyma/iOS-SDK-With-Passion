/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOResourceManifestConfiguration, GEOTileKeyList, GEOTileKeyMap, NSLocale, NSString;

@interface GEOTileRequest : NSObject

{
    GEOTileKeyList *_keyList;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    GEOTileKeyMap *_cachedEtags;
    GEOTileKeyMap *_cachedData;
    GEOTileKeyMap *_priorities;
    GEOTileKeyMap *_signpostIDs;
    GEOTileKeyMap *_createTimes;
    GEOTileKeyMap *_additionalInfos;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    GEOApplicationAuditToken *_auditToken;
    unsigned long long _constraints;
    NSString *_backgroundSessionIdentifier;
    _Bool _shouldParticipateInBalancer;
    unsigned char _loadReason;
}

@property (nonatomic, readonly) GEOTileKeyList *keyList;
@property (nonatomic, readonly) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) GEOTileKeyMap *cachedEtags;
@property (nonatomic, readonly) GEOTileKeyMap *cachedData;
@property (nonatomic, readonly) GEOTileKeyMap *priorities;
@property (nonatomic, readonly) GEOTileKeyMap *signpostIDs;
@property (nonatomic, readonly) GEOTileKeyMap *createTimes;
@property (nonatomic, readonly) GEOTileKeyMap *additionalInfos;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) unsigned char loadReason;
@property (nonatomic, readonly) unsigned long long constraints;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly) _Bool shouldParticipateInBalancer;

- (id)init;
- (id)description;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 signpostIDs:(id)arg7 createTimes:(id)arg8 additionalInfos:(id)arg9 bundleIdentifier:(id)arg10 bundleVersion:(id)arg11 auditToken:(id)arg12 constraints:(unsigned long long)arg13 backgroundSessionIdentifier:(id)arg14 shouldParticipateInBalancer:(_Bool)arg15 reason:(unsigned char)arg16;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;

@end
