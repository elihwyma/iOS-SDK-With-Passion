/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SASRecognition;

@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *rawRecognition;
@property (copy, nonatomic) NSString *sessionId;

+ (id)clientBoundConfusionNetwork;
+ (id)clientBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
