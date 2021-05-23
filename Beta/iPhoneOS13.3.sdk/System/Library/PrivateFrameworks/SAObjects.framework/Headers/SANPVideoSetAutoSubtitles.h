/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAutoSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)setAutoSubtitles;
+ (id)setAutoSubtitlesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
