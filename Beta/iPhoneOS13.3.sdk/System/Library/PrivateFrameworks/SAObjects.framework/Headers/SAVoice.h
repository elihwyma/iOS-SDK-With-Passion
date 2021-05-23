/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageString;
@property (copy, nonatomic) NSString *masteredVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (nonatomic) long long resourceContentVersion;
@property (copy, nonatomic) NSString *resourceMasteredVersion;
@property (nonatomic) long long voiceContentVersion;
@property (copy, nonatomic) NSString *voiceType;

+ (id)voice;
+ (id)voiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
