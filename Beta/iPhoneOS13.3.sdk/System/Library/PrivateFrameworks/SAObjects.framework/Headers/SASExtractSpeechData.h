/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *speechRequestId;
@property (copy, nonatomic) NSNumber *startTime;

+ (id)extractSpeechData;
+ (id)extractSpeechDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
