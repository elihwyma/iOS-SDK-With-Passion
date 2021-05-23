/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPRequest.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerRequest : MPRequest

{
    _Bool _disablePlaybackStateValidation;
    _Bool _disablePlaybackRateValidation;
    MPCPlayerPath *_playerPath;
    MPPropertySet *_playingItemProperties;
    MPPropertySet *_queueSectionProperties;
    MPPropertySet *_queueItemProperties;
    NSString *_preferredFallbackItemRelationship;
    CDStruct_339ad95e _tracklistRange;
}

@property (copy, nonatomic) MPPropertySet *playingItemProperties;
@property (copy, nonatomic) MPPropertySet *queueSectionProperties;
@property (copy, nonatomic) MPPropertySet *queueItemProperties;
@property (nonatomic) _Bool disablePlaybackStateValidation;
@property (nonatomic) _Bool disablePlaybackRateValidation;
@property (copy, nonatomic) NSString *preferredFallbackItemRelationship;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (nonatomic) CDStruct_339ad95e tracklistRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)responseClass;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_stateDumpObject;
- (id)middlewareClasses;

@end
