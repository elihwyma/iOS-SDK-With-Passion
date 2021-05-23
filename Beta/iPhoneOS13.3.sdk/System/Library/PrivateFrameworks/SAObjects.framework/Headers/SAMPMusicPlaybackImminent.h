/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (copy, nonatomic) NSString *preloadedUserSharedUserId;

+ (id)musicPlaybackImminent;
+ (id)musicPlaybackImminentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
