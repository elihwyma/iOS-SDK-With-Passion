/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject

{
    ICMusicSubscriptionStatus *_subscriptionStatusObject;
    _Bool _definitiveInformation;
    _Bool _hasPlaybackCapability;
    _Bool _requiresCarrierManualVerification;
    _Bool _shouldUseLease;
    _Bool _shouldUseAccountLessStreaming;
}

@property (nonatomic, readonly, getter=isDefinitiveInformation) _Bool definitiveInformation;
@property (nonatomic, readonly) _Bool hasPlaybackCapability;
@property (nonatomic, readonly) _Bool requiresCarrierManualVerification;
@property (nonatomic, readonly) _Bool shouldUseLease;
@property (nonatomic, readonly) _Bool shouldUseAccountLessStreaming;

- (id)description;
- (id)initWithICSubscriptionStatus:(id)arg1;

@end
