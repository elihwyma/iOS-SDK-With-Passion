/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelStoreAsset : MPModelObject

@property (nonatomic) long long endpointType;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (nonatomic, getter=isRedownloadable) _Bool redownloadable;
@property (nonatomic) unsigned long long accountIdentifier;
@property (nonatomic) _Bool shouldReportPlayEvents;
@property (nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired;
@property (nonatomic, readonly) _Bool needsUserUpload;

+ (id)allSupportedProperties;
+ (id)__subscriptionRequired_KEY;
+ (id)__endpointType_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__redownloadable_KEY;
+ (id)__accountIdentifier_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__needsUserUpload_KEY;

@end
