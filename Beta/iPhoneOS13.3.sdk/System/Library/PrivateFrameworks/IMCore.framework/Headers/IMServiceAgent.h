/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject

{
    NSDictionary *_currentAVChatInfo;
}

@property (retain, nonatomic) NSArray *myAvailableMessages;
@property (retain, nonatomic) NSArray *myAwayMessages;
@property (nonatomic, readonly) unsigned long long vcCapabilities;
@property (weak, nonatomic, readonly) NSDictionary *currentAVChatInfo;
@property (nonatomic, readonly) unsigned long long requestAudioReflectorStart;
@property (nonatomic, readonly) unsigned long long requestAudioReflectorStop;

+ (id)notificationCenter;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)sharedAgent;
+ (void)setServiceAgentCapabilities:(long long)arg1;
+ (long long)serviceAgentCapabilities;

- (id)notificationCenter;
- (id)serviceWithName:(id)arg1;
- (id)myPictureData;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)launchIfNecessary;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (unsigned long long)requestVideoStillForPerson:(id)arg1;

@end
