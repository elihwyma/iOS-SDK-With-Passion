/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber, NSString;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *length;

+ (id)voiceMail;
+ (id)voiceMailWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
