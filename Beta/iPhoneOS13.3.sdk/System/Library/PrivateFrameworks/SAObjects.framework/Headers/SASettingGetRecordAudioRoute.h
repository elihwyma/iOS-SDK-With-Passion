/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASettingGetRecordAudioRoute : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *audioCategory;

+ (id)getRecordAudioRoute;
+ (id)getRecordAudioRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
