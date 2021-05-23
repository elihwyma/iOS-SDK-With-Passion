/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speechRecognitionId;
@property (nonatomic) long long utteranceIndex;

+ (id)changePrimaryUtterance;
+ (id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
