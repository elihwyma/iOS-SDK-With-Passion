/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASettingGetPlaybackAudioRoute : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *audioCategory;

+ (id)getPlaybackAudioRoute;
+ (id)getPlaybackAudioRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
