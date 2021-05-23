/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (retain, nonatomic) SASyncAnchor *current;

+ (id)chunkAccepted;
+ (id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
