/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIAccessViewController;

__attribute__((visibility("hidden")))
@interface VUIVPPAManager : NSObject

{
    VUIAccessViewController *_accessViewController;
}

@property (retain, nonatomic) VUIAccessViewController *accessViewController;

+ (id)sharedInstance;
+ (_Bool)_isReminderDue:(id)arg1 reminderInterval:(double)arg2;
+ (id)addUniqueChannels:(id)arg1 channels:(id)arg2;
+ (id)_getConsentedChannels;
+ (id)_getDeniedChannels;
+ (_Bool)channelAlreadyExists:(id)arg1 channelID:(id)arg2;

- (id)_rootViewController;
- (_Bool)_isChannelVPPAPromptEligible:(id)arg1;
- (_Bool)_isVPPAPromptDueForConfig:(id)arg1;
- (void)_presentVPPAConsentScreen:(id)arg1 vppaState:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getVPPABulkChannels:(long long)arg1;
- (id)_getEligibleBulkChannels;
- (void)startVPPAConsentFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
