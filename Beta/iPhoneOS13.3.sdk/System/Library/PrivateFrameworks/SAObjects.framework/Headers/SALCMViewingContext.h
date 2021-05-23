/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SALCMContent;

@interface SALCMViewingContext : SADomainObject

@property (nonatomic) _Bool commercialPlaying;
@property (copy, nonatomic) NSNumber *durationInMilliseconds;
@property (retain, nonatomic) SALCMContent *nowPlaying;
@property (copy, nonatomic) NSString *nowPlayingAppId;
@property (nonatomic) _Bool paused;
@property (copy, nonatomic) NSNumber *playbackPositionInMilliseconds;
@property (copy, nonatomic) NSArray *viewingHistory;

+ (id)viewingContext;
+ (id)viewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
