/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SAMPCollection, SAMPMediaItem;

@interface SAMPSteerMusic : SADomainCommand

@property (retain, nonatomic) SAMPCollection *currentListeningToCollection;
@property (retain, nonatomic) SAMPMediaItem *currentListeningToItem;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *steerableBlob;

+ (id)steerMusic;
+ (id)steerMusicWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
