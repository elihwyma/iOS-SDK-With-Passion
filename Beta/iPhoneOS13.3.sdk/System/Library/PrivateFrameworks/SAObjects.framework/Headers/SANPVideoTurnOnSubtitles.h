/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoTurnOnSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredOptionId;
@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)turnOnSubtitles;
+ (id)turnOnSubtitlesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
