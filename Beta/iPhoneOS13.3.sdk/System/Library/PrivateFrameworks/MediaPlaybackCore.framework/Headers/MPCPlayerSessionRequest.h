/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPRequest.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerSessionRequest : MPRequest

{
    MPCPlayerPath *_playerPath;
    MPPropertySet *_sessionProperties;
}

@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (copy, nonatomic) MPPropertySet *sessionProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) CDStruct_339ad95e tracklistRange;
@property (nonatomic, readonly) MPPropertySet *playingItemProperties;
@property (nonatomic, readonly) MPPropertySet *queueItemProperties;
@property (nonatomic, readonly) MPPropertySet *queueSectionProperties;
@property (nonatomic, readonly) NSString *preferredFallbackItemRelationship;

+ (Class)responseClass;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)middlewareClasses;

@end
