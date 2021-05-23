/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *interactionId;
@property (retain, nonatomic) SASPronunciationData *pronunciationData;

+ (id)pronunciationRecognized;
+ (id)pronunciationRecognizedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
