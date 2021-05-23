/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, SAMPMediaItem;

@interface SAMPGeniusSummon : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPMediaItem *mediaItem;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSString *upNextQueueInsertLocation;

+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
