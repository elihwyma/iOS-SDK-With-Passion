/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *aceAudioData;
@property (copy, nonatomic) NSArray *dialogStrings;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSArray *streamIds;

+ (id)preSynthesizeTTS;
+ (id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
