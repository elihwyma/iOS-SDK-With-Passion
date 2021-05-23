/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingResponse.h>

@class SASettingAudioRoute;

@interface SASettingGetAudioRouteResponse : SASettingResponse

@property (retain, nonatomic) SASettingAudioRoute *audioRoute;

+ (id)getAudioRouteResponse;
+ (id)getAudioRouteResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
