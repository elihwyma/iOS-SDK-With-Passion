/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetDefaultAudioTrack : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)setDefaultAudioTrack;
+ (id)setDefaultAudioTrackWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
