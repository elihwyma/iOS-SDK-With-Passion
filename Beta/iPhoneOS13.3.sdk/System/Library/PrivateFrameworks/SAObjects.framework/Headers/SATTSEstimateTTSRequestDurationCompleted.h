/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SATTSEstimateTTSRequestDurationCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *durations;

+ (id)estimateTTSRequestDurationCompleted;
+ (id)estimateTTSRequestDurationCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
