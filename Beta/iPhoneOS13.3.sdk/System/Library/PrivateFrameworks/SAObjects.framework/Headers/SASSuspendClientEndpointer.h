/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASSuspendClientEndpointer : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *audioProcessedMs;
@property (copy, nonatomic) NSNumber *suspendDurationMs;

+ (id)suspendClientEndpointer;
+ (id)suspendClientEndpointerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
