/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerResponse, MPModelGenericObject, NSArray, NSIndexPath, NSString;

@interface MPCPlayerResponseItem : NSObject

{
    unsigned long long _seekSupport;
    _Bool _placeholder;
    NSString *_contentItemIdentifier;
    long long _revision;
    NSString *_localizedDurationString;
    NSArray *_languageOptionGroups;
    MPCPlayerResponse *_response;
    NSIndexPath *_indexPath;
    MPModelGenericObject *_metadataObject;
    CDStruct_fce57115 _duration;
}

@property (weak, nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MPModelGenericObject *metadataObject;
@property (nonatomic, readonly, getter=isPlaceholder) _Bool placeholder;
@property (nonatomic, readonly) NSString *contentItemIdentifier;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly) CDStruct_fce57115 duration;
@property (nonatomic, readonly) NSString *localizedDurationString;
@property (nonatomic, readonly) NSArray *languageOptionGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)remove;
- (id)startPictureInPicture;
- (id)_stateDumpObject;
- (id)playbackRateCommand;
- (id)seekCommand;
- (id)likeCommand;
- (id)dislikeCommand;
- (id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3;
- (id)_buildLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2;
- (unsigned long long)_determineSeekSupport;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)arg1;
- (id)wishlistCommand;
- (id)rateCommand;

@end
