/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetPlaybackPosition : SADomainCommand

@property (nonatomic) int position;

+ (id)setPlaybackPosition;
+ (id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
