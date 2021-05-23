/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMSharedMessageSendingUtilities : NSObject

{
    long long _serviceAvailability;
}

@property long long serviceAvailability;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)_setupAccountMonitor;

- (_Bool)_hasSMSCapability;
- (_Bool)isiMessageEnabled;
- (_Bool)_canSendText;
- (id)_managedConfigAppWhitelist;
- (void)_updateServiceAvailability;
- (_Bool)isMMSEnabled;
- (_Bool)_isiMessageSupported;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (_Bool)canSendText;
- (_Bool)isSupportedAttachmentUTI:(id)arg1;
- (_Bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;

@end
