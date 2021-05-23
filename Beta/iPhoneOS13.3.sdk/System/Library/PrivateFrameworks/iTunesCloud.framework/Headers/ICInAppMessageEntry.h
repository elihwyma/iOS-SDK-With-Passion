/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICIAMApplicationMessage, NSDictionary, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ICInAppMessageEntry : NSObject <Swift>

{
    NSString *_bundleIdentifier;
    NSMutableDictionary *_metadata;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_resourceCache;
    _Bool _shouldDownloadResources;
    ICIAMApplicationMessage *_applicationMessage;
}

@property (nonatomic, readonly) ICIAMApplicationMessage *applicationMessage;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic) _Bool shouldDownloadResources;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearCachedResources;
- (id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (id)cachedLocationForResourceWithIdentifier:(id)arg1;
- (void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2;
- (void)updateMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)allCachedResourceLocations;

@end
