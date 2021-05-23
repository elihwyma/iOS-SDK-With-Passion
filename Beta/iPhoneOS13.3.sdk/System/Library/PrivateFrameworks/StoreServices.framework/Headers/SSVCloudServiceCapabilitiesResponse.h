/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSVSubscriptionStatus;

@interface SSVCloudServiceCapabilitiesResponse : NSObject

{
    _Bool _supportsMusicCatalogPlayback;
    _Bool _supportsAddToCloudMusicLibrary;
    _Bool _canSubscribeToMusicCatalog;
    SSVSubscriptionStatus *_subscriptionStatus;
}

@property (copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus;
@property (nonatomic) _Bool supportsMusicCatalogPlayback;
@property (nonatomic) _Bool supportsAddToCloudMusicLibrary;
@property (nonatomic) _Bool canSubscribeToMusicCatalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)_descriptionWithSubscriptionStatusDescriptorBlock:(CDUnknownBlockType)arg1;

@end
