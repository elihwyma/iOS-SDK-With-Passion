/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICClientInfo, ICStorePlatformRequest, ICUserIdentity, ICUserIdentityStore, NSArray, NSNumber, NSString;

@interface MPStoreItemMetadataRequest : NSObject

{
    _Bool _allowLocalEquivalencies;
    _Bool _shouldIgnoreCache;
    _Bool _shouldIgnoreExpiration;
    _Bool _shouldRequireCachedResults;
    unsigned long long _reason;
    NSArray *_itemIdentifiers;
    NSNumber *_timeoutInterval;
    NSString *_platform;
    double _retryDelay;
    NSString *_clientIdentifier;
    long long _personalizationStyle;
    ICClientInfo *_clientInfo;
    ICUserIdentity *_delegatedUserIdentity;
    ICUserIdentity *_userIdentity;
    ICUserIdentityStore *_userIdentityStore;
}

@property (copy, nonatomic) ICClientInfo *clientInfo;
@property (copy, nonatomic) ICUserIdentity *delegatedUserIdentity;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (retain, nonatomic) ICUserIdentityStore *userIdentityStore;
@property (copy, nonatomic, readonly) ICStorePlatformRequest *storePlatformRequest;
@property (nonatomic) _Bool allowLocalEquivalencies;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (copy, nonatomic) NSNumber *timeoutInterval;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) double retryDelay;
@property (nonatomic) _Bool shouldIgnoreCache;
@property (nonatomic) _Bool shouldIgnoreExpiration;
@property (nonatomic) _Bool shouldRequireCachedResults;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic, readonly, getter=isPersonalized) _Bool personalized;
@property (nonatomic) long long personalizationStyle;

- (id)init;

@end
