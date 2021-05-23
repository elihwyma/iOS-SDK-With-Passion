/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriting : NSObject

{
    HDProfile *_profile;
}

@property (nonatomic, readonly) HDProfile *profile;

- (id)initWithProfile:(id)arg1;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)arg1;
- (_Bool)markTemplateAvailable:(id)arg1 error:(id *)arg2;

@end
