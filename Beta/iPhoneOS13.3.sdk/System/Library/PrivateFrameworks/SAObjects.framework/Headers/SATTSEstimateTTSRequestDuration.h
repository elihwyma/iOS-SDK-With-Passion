/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSArray *texts;

+ (id)estimateTTSRequestDuration;
+ (id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
