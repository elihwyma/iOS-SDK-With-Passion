/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICPrivacyInfo : NSObject

{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic, readonly) _Bool privacyAcknowledgementRequiredForMedia;
@property (nonatomic, readonly) _Bool privacyAcknowledgementRequiredForMusic;
@property (nonatomic, readonly) _Bool privacyAcknowledgementRequiredForVideos;
@property (nonatomic, readonly) _Bool privacyAcknowledgementRequiredForBooks;
@property (nonatomic, readonly) _Bool privacyAcknowledgementRequiredForPodcasts;
@property (nonatomic, readonly) _Bool privacyAcknowledgementRequiredForApplications;

+ (id)sharedPrivacyInfo;

- (id)init;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (_Bool)privacyAcknowledgementRequiredForSystemApplicationType:(long long)arg1;
- (_Bool)_privacyAcknowledgementRequiredForIdentifier:(id)arg1;

@end
