/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVItem, NSData, NSDictionary, NSString;

@interface MPPlaybackContext : NSObject <Swift>

{
    MPAVItem *_playerCurrentItem;
    _Bool _supportsAccountRectification;
    long long _actionAfterQueueLoad;
    long long _shuffleType;
    long long _repeatType;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
    NSDictionary *_siriWHAMetricsInfo;
    NSString *_sessionIdentifier;
}

@property (nonatomic) long long actionAfterQueueLoad;
@property (nonatomic, readonly) _Bool containsRestorableContent;
@property (nonatomic, readonly) _Bool shouldBecomeActive;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic, readonly, getter=isSupported) _Bool supported;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) _Bool supportsAccountRectification;

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionComponents;
- (void)clearStartItem;

@end
