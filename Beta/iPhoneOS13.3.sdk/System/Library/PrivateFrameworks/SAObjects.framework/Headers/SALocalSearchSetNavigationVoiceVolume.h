/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand

@property (copy, nonatomic) NSString *volume;

+ (id)setNavigationVoiceVolume;
+ (id)setNavigationVoiceVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
